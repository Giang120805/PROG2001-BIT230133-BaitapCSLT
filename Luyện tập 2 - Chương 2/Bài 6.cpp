#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so a: ");
    scanf("%d", &a);

    printf("Nhap so b (so lan dich bit): ");
    scanf("%d", &b);

    // Dịch bit sang trái b lần
    int dichTrai = a << b;

    // Dịch bit sang phải b lần
    int dichPhai = a >> b;

    printf("Gia tri cua a sau khi dich trai %d lan: %d\n", b, dichTrai);
    printf("Gia tri cua a sau khi dich phai %d lan: %d\n", b, dichPhai);

    return 0;
}