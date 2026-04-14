#include <stdio.h>

int main() {
    int soNguyen;
    float soThuc;
    int epNguoc;

    // Nhập số nguyên
    printf("Nhap mot so nguyen: ");
    scanf("%d", &soNguyen);

    // Ép kiểu sang số thực
    soThuc = (float) soNguyen;

    // Ép ngược lại sang số nguyên
    epNguoc = (int) soThuc;

    printf("So nguyen ban dau: %d\n", soNguyen);
    printf("Sau khi ep sang so thuc: %.2f\n", soThuc);
    printf("Sau khi ep nguoc lai sang so nguyen: %d\n", epNguoc);

    return 0;
}