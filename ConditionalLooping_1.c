/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is Even.\n", num);
    }
    else
    {
        printf("%d is Odd.\n", num);
    }

    return 0;
}
