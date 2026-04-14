#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main() {
    SetConsoleOutputCP(65001);

    int soNguyen;
    float soThuc;
    char kyTu;
    bool giaTriBool;

    printf("Nhap so nguyen: ");
    scanf("%d", &soNguyen);

    printf("Nhap so thuc: ");
    scanf("%f", &soThuc);

    printf("Nhap ky tu: ");
    scanf(" %c", &kyTu);

    printf("Nhap gia tri bool (0 = false, 1 = true): ");
    scanf("%d", &giaTriBool);

    printf("%d, %.2f, %c, %d",
           soNguyen,
           soThuc,
           kyTu,
           giaTriBool);

    return 0;
}