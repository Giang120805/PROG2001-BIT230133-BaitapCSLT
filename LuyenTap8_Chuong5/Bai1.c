#include <stdio.h>
#include <string.h>

// Khai báo struct Student
struct Student {
    char mssv[20];
    char ten[50];
};

int main() {
    // Khởi tạo biến struct
    struct Student sv;

    // Gán giá trị
    strcpy(sv.mssv,"BIT230133");
    strcpy(sv.ten, "Nguyen Truong Giang");

    printf("MSSV: %s\n", sv.mssv);
    printf("Ten: %s\n", sv.ten);

    return 0;
}