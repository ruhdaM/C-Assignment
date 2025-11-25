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

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int mainSum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++)
    {
        mainSum += A[i][i];
        secondarySum += A[i][n - 1 - i];
    }

    printf("Sum of main diagonal = %d\n", mainSum);
    printf("Sum of secondary diagonal = %d\n", secondarySum);

    return 0;
}
