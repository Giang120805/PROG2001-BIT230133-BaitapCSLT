#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    //in dữ liệu ra màn hình, 65001 là mã UTF-8

    printf("Chào mừng bạn đến với lập trình C!\n");
    printf("Bắt đầu hành trình của bạn ngay hôm nay.");
    return 0;
}