/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a value for x: ");
    scanf("%d", &x);

    int *p = &x;
    int **pp = &p;

    printf("%d\n", x);
    printf("%d\n", *p);
    printf("%d\n", **pp);

    return 0;
}
