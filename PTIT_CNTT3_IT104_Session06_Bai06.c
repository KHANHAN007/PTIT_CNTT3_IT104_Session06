#include <stdio.h>

int countWays(int n) {
    if (n==0)
        return 1;
    if (n<0)
        return 0;
    return countWays(n-1) + countWays(n-2);
}
int main() {
    int n;
    scanf("%d",&n);
    if (n<=0) {
        printf("Khong hop le");
        return 1;
    }
    printf("%d", countWays(n));
    return 0;
}