/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int sumNum(int arr[], int n);
float averageNum(int arr[], int n);

int sumNum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float averageNum(int arr[], int n)
{
    float avg = 0.0;
    for (int i = 0; i < n; i++)
    {
        avg += arr[i];
    }
    avg /= n;
    return avg;
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

    int sum = sumNum(arr, n);
    printf("Sum of all the elements entered: %d\n", sum);

    float average = averageNum(arr, n);
    printf("Average of all the elements entered: %.2f", average);

    return 0;
}