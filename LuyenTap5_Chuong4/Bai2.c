#include <stdio.h>

// Hàm tính tổng từ 1 đến n
int tinhTong(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;   // cộng dồn
    }

    return sum;  // trả về kết quả
}

int main() {
    int n, ketQua;

    printf("Nhap n: ");
    scanf("%d", &n);

    ketQua = tinhTong(n); // gọi hàm

    printf("Tong 1 + 2 + ... + %d = %d", n, ketQua);

    return 0;
}