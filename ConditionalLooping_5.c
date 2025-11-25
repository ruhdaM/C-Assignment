/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}
