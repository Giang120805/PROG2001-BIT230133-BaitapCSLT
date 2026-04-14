#include <stdio.h>

int main() {
    float x;

    printf("Nhap gia tri cua x: ");
    scanf("%f", &x);

    // Tăng x thêm 5
    x += 5;
    printf("Sau khi tang x them 5: %.2f\n", x);

    // Giảm x đi 3
    x -= 3;
    printf("Sau khi giam x di 3: %.2f\n", x);

    // Nhân x với 2
    x *= 2;
    printf("Sau khi nhan x voi 2: %.2f\n", x);

    // Chia x cho 4
    x /= 4;
    printf("Sau khi chia x cho 4: %.2f\n", x);

    return 0;
}