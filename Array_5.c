/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

void mergeArray(int arr1[], int arr2[], int n1, int n2, int merged[]);

void mergeArray(int arr1[], int arr2[], int n1, int n2, int merged[])
{
    int i, j;

    for (i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    for (j = 0; j < n2; j++)
    {
        merged[i + j] = arr2[j];
    }
}

int main()
{
    int merged[100];

    int n1;
    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    int n2;
    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    int arr1[n1];

    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int arr2[n2];
    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    mergeArray(arr1, arr2, n1, n2, merged);

    printf("Merged Array: ");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}