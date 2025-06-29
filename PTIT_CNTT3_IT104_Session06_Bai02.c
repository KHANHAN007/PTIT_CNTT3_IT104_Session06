#include <stdio.h>

int fibonacci(int n) {
    if(n==1 || n==2) {
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
void printReverseFibonacci(int n) {
    if (n==0) {
        return;
    }
    printf("%d ", fibonacci(n));
    printReverseFibonacci(n-1);
}
int main() {
    int n;
    scanf("%d",&n);
    if (n<=0) {
        printf("Khong hop le");
        return 1;
    }
    printReverseFibonacci(n);
    return 0;
}