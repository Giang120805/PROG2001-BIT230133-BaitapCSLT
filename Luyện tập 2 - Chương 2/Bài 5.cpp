#include <stdio.h>

int main() {
    int x;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &x);

    if (x >= 10 && x <= 50) {
        printf("So %d nam trong khoang tu 10 den 50.\n", x);
    } else {
        printf("So %d khong nam trong khoang tu 10 den 50.\n", x);
    }

    return 0;
}