#include <stdio.h>

int main() {
    float km;
    float tien = 0;

    printf("Nhap so km: ");
    scanf("%f", &km);

    if (km <= 0) {
        printf("So km khong hop le!");
    }
    else if (km <= 1) {
        tien = km * 15000;
    }
    else if (km <= 5) {
        tien = 15000 + (km - 1) * 13000;
    }
    else {
        tien = 15000 + 4 * 13000 + (km - 5) * 11000;
    }
    // giảm giá 10%
    if (km > 120) {
        tien = tien * 0.9;
    }
    printf("So tien taxi = %.0f VND", tien);
    return 0;
}