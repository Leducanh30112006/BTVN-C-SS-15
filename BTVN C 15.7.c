#include <stdio.h>

int main() {
    char chuoi[] = "sg89sg@$Kjdg9gs!";
    int demChuCai = 0;
    int demChuSo = 0;
    int demKiTuDacBiet = 0;
    
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
            demChuCai++;
        } else if (chuoi[i] >= '0' && chuoi[i] <= '9') {
            demChuSo++;
        } else {
            demKiTuDacBiet++;
        }
    }
    printf("%d ki tu la chu cai\n", demChuCai);
    printf("%d ki tu la chu so\n", demChuSo);
    printf("%d ki tu la ki tu dac biet\n", demKiTuDacBiet);
    
    return 0;
}

