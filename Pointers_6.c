/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", p + i);

    int max = *p;
    int min = *p;

    for (int i = 1; i < n; i++)
    {
        if (*(p + i) > max)
            max = *(p + i);
        if (*(p + i) < min)
            min = *(p + i);
    }

    printf("Largest = %d, Smallest = %d", max, min);

    return 0;
}
