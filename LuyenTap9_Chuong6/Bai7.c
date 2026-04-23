#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char c;

    // Mở file1 để ghi thêm
    f1 = fopen("D:\\Test\\file1.txt", "a");
    // Mở file2 để đọc
    f2 = fopen("D:\\Test\\file2.txt", "r");

    if (f1 == NULL || f2 == NULL) {
        printf("Loi mo file!\n");
        return 1;
    }
    // Đọc file2 và ghi vào cuối file1
    while ((c = fgetc(f2)) != EOF) {
        fputc(c, f1);
    }

    // Đóng file
    fclose(f1);
    fclose(f2);

    printf("Da ghep file vao file1 thanh cong!\n");
    return 0;
}
