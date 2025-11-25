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

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
