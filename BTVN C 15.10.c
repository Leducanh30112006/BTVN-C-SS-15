#include <stdio.h>

int main() {
    char chuoi[] = "Hello World!";
    int dem[256] = {0};
    for (int i = 0; chuoi[i] != '\0'; i++) {
        dem[(unsigned char)chuoi[i]]++;
    }
    printf("Cac ky tu va so lan xuat hien cua tung ky tu trong chuoi:\n");
    for (int i = 0; i < 256; i++) {
        if (dem[i] > 0) {
            printf("'%c': %d\n", i, dem[i]);
        }
    }
    return 0;
}

