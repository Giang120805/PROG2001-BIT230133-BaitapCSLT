#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    // Kiểm tra chia cho 0
    if (b == 0) {
        printf("Khong the chia cho 0!\n");
    } else {
        printf("\nKet qua cac phep tinh:\n");
        printf("Tong (a + b) = %d\n", a + b);
        printf("Hieu (a - b) = %d\n", a - b);
        printf("Tich (a * b) = %d\n", a * b);
        printf("Thuong (a / b) = %d\n", a / b);
        printf("Chia lay du (a %% b) = %d\n", a % b);
    }

    return 0;
}