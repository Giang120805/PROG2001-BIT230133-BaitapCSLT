#include <stdio.h>
#include <string.h>

// Khai báo struct Employee
struct Employee {
    int id;
    char ten[50];
    float luong;
};

int main() {
    // Tạo mảng Employee gồm 3 nhân viên
    struct Employee ds[3];

    // Gán dữ liệu
    ds[0].id = 1;
    strcpy(ds[0].ten, "Nguyen Van A");
    ds[0].luong = 5000;

    ds[1].id = 2;
    strcpy(ds[1].ten, "Tran Thi B");
    ds[1].luong = 6000;

    ds[2].id = 3;
    strcpy(ds[2].ten, "Le Van C");
    ds[2].luong = 7000;

    printf("Danh sach nhan vien:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nhan vien %d:\n", i + 1);
        printf("ID: %d\n", ds[i].id);
        printf("Ten: %s\n", ds[i].ten);
        printf("Luong: %.2f\n\n", ds[i].luong);
    }
    return 0;
}