#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Nhap so a: ");
    scanf("%d", &a);

    printf("Nhap so b: ");
    scanf("%d", &b);

    printf("Nhap so c: ");
    scanf("%d", &c);

    // Giả sử a là số lớn nhất ban đầu
    max = a;

    // So sánh với b
    if (b > max) {
        max = b;
    }

    // So sánh với c
    if (c > max) {
        max = c;
    }

    printf("Gia tri lon nhat la: %d\n", max);

    return 0;
}