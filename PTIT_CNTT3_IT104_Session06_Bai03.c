#include <stdio.h>

int sumDigit(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumDigit(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Khong hop le");
        return 1;
    }
    printf("%d", sumDigit(n));
    return 0;
}
