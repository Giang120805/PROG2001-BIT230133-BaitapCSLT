#include <stdio.h>

int timMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    int a, b, c, ketQua;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Nhap c: ");
    scanf("%d", &c);

    ketQua = timMax(a, b, c);

    printf("Gia tri lon nhat la: %d", ketQua);

    return 0;
}