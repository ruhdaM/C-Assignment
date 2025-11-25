/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int main() {
    char str[100], *p = str;
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (*p != '\0') {
        len++;
        p++;
    }

    printf("Length = %d", len);

    return 0;
}
