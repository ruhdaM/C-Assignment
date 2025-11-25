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
    char ch;

    fp = fopen("output.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Contents of the file:\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
