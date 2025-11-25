/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int largestNumber(int arr[], int n);

int largestNumber(int arr[], int n)
{
    int temp = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}

int main()
{

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largestNum = largestNumber(arr, n);

    printf("Largest number in the array is: %d", largestNum);

    return 0;
}