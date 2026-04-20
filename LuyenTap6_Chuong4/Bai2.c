#include <stdio.h>

// Hàm đệ quy tính tổng
int tong(int n) {
    if (n == 1) {
        return 1; // điều kiện dừng
    }
    return n + tong(n - 1); // gọi lại chính nó
}
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int ketQua = tong(n);
    printf("Tong = %d", ketQua);
    return 0;
}