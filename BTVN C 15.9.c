#include <stdio.h>

void xoaKyTu(char* chuoi, char kyTuXoa) {
    int i, j;
    for (i = 0, j = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] != kyTuXoa) {
            chuoi[j++] = chuoi[i];
        }
    }
    chuoi[j] = '\0';
}
int main() {
    char chuoi[] = "Hello World";
    printf("Chuoi goc: %s\n", chuoi);
    char kyTu;
    printf("Nhap vao mot ky tu can xoa: ");
    scanf(" %c", &kyTu);
    xoaKyTu(chuoi, kyTu);
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", kyTu, chuoi);

    return 0;
}

