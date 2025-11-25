/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int isWhitespace(char ch)
{
    return (ch == ' ' || ch == '\n' || ch == '\t' ||
            ch == '\r' || ch == '\f' || ch == '\v');
}

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("output.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == '\n')
            lines++;

        if (isWhitespace(ch))
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
