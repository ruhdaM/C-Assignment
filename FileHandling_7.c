/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int num;
    int sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) != EOF)
    {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
