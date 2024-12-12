#include <stdio.h>

void vietHoaChuCaiDau(char* chuoi) {
    int i = 0;

    if (chuoi[i] >= 'a' && chuoi[i] <= 'z') {
        chuoi[i] = chuoi[i] - ('a' - 'A');
    }
    i++;
    while (chuoi[i] != '\0') {
        if (chuoi[i] == ' ' && chuoi[i + 1] >= 'a' && chuoi[i + 1] <= 'z') {
            chuoi[i + 1] = chuoi[i + 1] - ('a' - 'A');
        }
        i++;
    }
}
int main() {
    char chuoi[] = "xin chao cac ban";
    printf("Chuoi goc: %s\n", chuoi);
    vietHoaChuCaiDau(chuoi);
    printf("Chuoi sau khi viet hoa cac chu cai dau: %s\n", chuoi); 
    return 0;
}

