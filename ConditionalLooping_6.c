/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int main()
{
    int num, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    } while (num != 0);

    printf("Reversed number = %d\n", rev);

    return 0;
}
