/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int reverse(int n)
{
    int rev = 0;

    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Reverse = %d\n", reverse(num));

    return 0;
}
