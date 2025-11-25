/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

void tranpose(int m, int n, int arr1[m][n], int arr2[n][m]);

void tranpose(int m, int n, int arr1[m][n], int arr2[n][m])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }
}
int main()
{

    int m, n;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columnns: ");
    scanf("%d", &n);

    int originalArr[m][n], transposeArr[n][m];
    
    printf("Enter elements: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &originalArr[i][j]);
        }
    }

    printf("Original matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", originalArr[i][j]);
        }
        printf("\n");
    }

    tranpose(m, n, originalArr, transposeArr);

    printf("Tranpose of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", transposeArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}