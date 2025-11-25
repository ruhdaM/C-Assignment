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
    char text[200];

    fp = fopen("output.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append:\n");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Data appended successfully.\n");

    return 0;
}
