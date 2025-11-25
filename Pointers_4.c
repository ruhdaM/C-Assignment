/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int main()
{
    char src[100], dest[100];

    printf("Enter a string: ");
    scanf("%s", src);

    char *p = src;
    char *q = dest;

    while (*p)
    {
        *q = *p;
        p++;
        q++;
    }
    *q = '\0';

    printf("%s", dest);

    return 0;
}
