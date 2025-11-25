/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int main()
{
    FILE *file1, *file2, *file3;
    char ch;

    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");
    file3 = fopen("merged.txt", "w");

    if (file1 == NULL || file2 == NULL || file3 == NULL)
    {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(file1)) != EOF)
    {
        fputc(ch, file3);
    }

    while ((ch = fgetc(file2)) != EOF)
    {
        fputc(ch, file3);
    }

    printf("Files merged successfully into merged.txt\n");

    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}
