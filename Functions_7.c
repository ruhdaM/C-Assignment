/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

void addMatrix(int m, int n, int A[m][n], int B[m][n], int C[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main()
{
    int m, n;

    printf("Enter rows: ");
    scanf("%d", &m);

    printf("Enter columns: ");
    scanf("%d", &n);

    int A[m][n], B[m][n], C[m][n];

    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    addMatrix(m, n, A, B, C);

    printf("\nResultant Matrix (A + B):\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
