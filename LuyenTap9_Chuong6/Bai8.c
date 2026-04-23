#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char c;

    fin = fopen("D:\\Test\\input.txt", "r");
    fout = fopen("D:\\Test\\output.txt", "w");
    if (fin == NULL || fout == NULL) {
        printf("Loi mo file!\n");
        return 1;
    }
    //  Đọc từng ký tự
    while ((c = fgetc(fin)) != EOF) {
        //  Nếu là chữ thường → đổi thành chữ hoa
        if (islower(c)) {
            c = toupper(c);
        }
        //  Ghi vào file mới
        fputc(c, fout);
    }
    fclose(fin);
    fclose(fout);
    printf("Da sao chep va chuyen thanh chu hoa thanh cong!\n");
    return 0;
}