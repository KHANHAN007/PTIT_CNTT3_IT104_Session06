#include <stdio.h>

int maxArr(int a[], int n) {
    if (n == 1)
        return a[0];
    int max = maxArr(a, n - 1);
    return (a[n - 1] > max) ? a[n - 1] : max;
}

int minArr(int a[], int n) {
    if (n == 1)
        return a[0];
    int min = minArr(a, n - 1);
    return (a[n - 1] < min) ? a[n - 1] : min;
}

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Khong hop le");
        return 1;
    }
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\t%d", maxArr(a, n), minArr(a, n));
    return 0;
}
