#include <stdio.h>
#include <string.h>

// Struct Owner
struct Owner {
    char ten[50];
    int tuoi;
};

// Struct Car (chứa Owner bên trong)
struct Car {
    char model[50];
    int nam;
    struct Owner owner; // nested struct
};

int main() {
    // Khởi tạo biến Car
    struct Car xe;

    // Gán giá trị
    strcpy(xe.model, "Toyota Camry");
    xe.nam = 2022;

    strcpy(xe.owner.ten, "Nguyen Truong Giang");
    xe.owner.tuoi = 20;

    // In thông tin
    printf("Thong tin xe:\n");
    printf("Model: %s\n", xe.model);
    printf("Nam: %d\n", xe.nam);

    printf("Chu xe:\n");
    printf("Ten: %s\n", xe.owner.ten);
    printf("Tuoi: %d\n", xe.owner.tuoi);

    return 0;
}