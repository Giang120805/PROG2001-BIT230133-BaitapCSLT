#include <stdio.h>

int main() {
    FILE *f;
    int num = 21;
    int readNum;

    //  Mở file text
    f = fopen("D:\\Test\\data.txt", "w+");
    if (f == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    //  Di chuyển đến vị trí 20
    fseek(f, 20, SEEK_SET);

    //  Ghi số vào file
    fprintf(f, "%d", num);

    //  Quay lại vị trí 20
    fseek(f, 20, SEEK_SET);

    //  Đọc lại số
    fscanf(f, "%d", &readNum);

    //  In kết quả
    printf("So da ghi: %d\n", num);
    printf("So doc duoc: %d\n", readNum);

    //  Lấy vị trí con trỏ
    long pos = ftell(f);
    printf("Vi tri con tro sau khi doc: %ld\n", pos);

    fclose(f);
    return 0;
}