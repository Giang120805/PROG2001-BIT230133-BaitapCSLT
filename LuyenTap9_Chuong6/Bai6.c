#include <stdio.h>

int main() {
    FILE *f;
    int a, b;

    //  Mở file để đọc
    f = fopen("D:\\Test\\bai2.txt", "r");

    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    //  Đọc dữ liệu từ file
    fscanf(f, "%d %d", &a, &b);

    //  In ra màn hình
    printf("a = %d, b = %d\n", a, b);

    fclose(f);
    return 0;
}