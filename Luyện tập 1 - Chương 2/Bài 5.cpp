#include <stdio.h>

int main() {
    const int soNguyen = 10;
    const float soThuc = 3.14;
    const char chuoi[] = "Xin chao";
    //const nghĩa là: Giá trị của biến KHÔNG được thay đổi sau khi khai báo

    printf("So nguyen: %d\n", soNguyen);
    printf("So thuc: %.2f\n", soThuc);
    printf("Chuoi: %s\n", chuoi);

    return 0;
}