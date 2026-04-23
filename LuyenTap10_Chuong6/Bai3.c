#include <stdio.h>

struct Product {
    char name[50];
    float price;
};

int main() {
    FILE *f;

    //  Mảng Product ban đầu
    struct Product p1[3] = {
        {"Banh_mi", 10000},
        {"Sua", 20000},
        {"Mi_tom", 5000}
    };

    struct Product p2[3];

    int n = 3;
    int i;

    //  Ghi vào file text
    f = fopen("D:\\Test\\product.txt", "w");
    if (f == NULL) {
        printf("Khong mo duoc file de ghi!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(f, "%s %.0f\n", p1[i].name, p1[i].price);
    }

    fclose(f);

    //  Đọc lại từ file
    f = fopen("D:\\Test\\product.txt", "r");
    if (f == NULL) {
        printf("Khong mo duoc file de doc!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fscanf(f, "%s %f", p2[i].name, &p2[i].price);
    }

    fclose(f);

    //  In ra kiểm tra
    printf("Danh sach san pham doc tu file:\n");
    for (i = 0; i < n; i++) {
        printf("Ten: %s | Gia: %.0f\n", p2[i].name, p2[i].price);
    }

    return 0;
}