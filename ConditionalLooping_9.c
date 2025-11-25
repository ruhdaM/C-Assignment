/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int main()
{
    int num, original, digit, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (original == rev)
    {
        printf("%d is a palindrome.\n", original);
    }
    else
    {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
