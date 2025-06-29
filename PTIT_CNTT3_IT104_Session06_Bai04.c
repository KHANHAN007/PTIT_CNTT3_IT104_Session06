#include <stdio.h>

void hanoi(int n, char from, char to, char aux) {
    if (n == 0) return;
    hanoi(n - 1, from, aux, to);
    printf("Dia %d di chuyen tu %c sang %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    printf("Nhap so dia: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Input khong hop le\n");
        return 0;
    }
    hanoi(n, 'A', 'C', 'B');
    return 0;
}