/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str))
    {
        printf("The string is palindrome.\n");
    }
    else
    {
        printf("The string is not palindrome.\n");
    }

    return 0;
}
