#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int soNguyen = 10;
    float soThuc = 1.23;
    char kyTu = 'A';
    bool giaTriBool = true; //true sẽ in ra 1, false sẽ in ra 0

    printf("%d, %.2f, %c, %d", 
           soNguyen, 
           soThuc, 
           kyTu, 
           giaTriBool);

    return 0;
}