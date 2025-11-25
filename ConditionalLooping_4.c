/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of natural numbers up to %d = %d\n", n, sum);

    return 0;
}
