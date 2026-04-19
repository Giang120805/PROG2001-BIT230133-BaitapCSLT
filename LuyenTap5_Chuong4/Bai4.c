#include <stdio.h>

void tinhTrungBinh(int *a, int *b, int *c, float *tb) {
    *tb = (*a + *b + *c) / 3.0;
}

int main() {
    int a, b, c;
    float trungBinh;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Nhap c: ");
    scanf("%d", &c);

    // Gọi hàm (truyền địa chỉ)
    tinhTrungBinh(&a, &b, &c, &trungBinh);

    printf("Gia tri trung binh = %.2f", trungBinh);

    return 0;
}