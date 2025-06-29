#include <stdio.h>

// Hàm đệ quy chuyển đĩa từ cọc A -> cọc C, dùng cọc B làm trung gian
void chuyenDia(int n, char A, char C, char B) {
    if (n == 1) {
        printf("Chuyển đĩa 1 từ %c sang %c\n", A, C);
    } else {
        // Bước 1: chuyển n-1 đĩa từ A sang B (dùng C làm trung gian)
        chuyenDia(n - 1, A, B, C);

        // Bước 2: chuyển đĩa lớn nhất từ A sang C
        printf("Chuyển đĩa %d từ %c sang %c\n", n, A, C);

        // Bước 3: chuyển n-1 đĩa từ B sang C (dùng A làm trung gian)
        chuyenDia(n - 1, B, C, A);
    }
}

int main() {
    int n;
    printf("Nhập số lượng đĩa: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Số lượng đĩa phải lớn hơn 0.\n");
    } else {
        chuyenDia(n, 'A', 'C', 'B');  // chuyển từ A -> C, B là trung gian
    }

    return 0;
}
