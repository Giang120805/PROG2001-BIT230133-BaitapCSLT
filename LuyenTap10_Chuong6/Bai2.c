#include <stdio.h>

int main() {
    FILE *f;

    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[5];
    int n = 5;
    int i;

    //  Ghi mảng vào file text
    f = fopen("D:\\Test\\array.txt", "w");
    if (f == NULL) {
        printf("Khong mo duoc file de ghi!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(f, "%d ", arr1[i]); // ghi từng số
    }

    fclose(f);

    //  Đọc lại mảng từ file
    f = fopen("D:\\Test\\array.txt", "r");
    if (f == NULL) {
        printf("Khong mo duoc file de doc!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fscanf(f, "%d", &arr2[i]); // đọc từng số
    }

    fclose(f);

    //  In ra kiểm tra
    printf("Mang doc tu file:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    return 0;
}