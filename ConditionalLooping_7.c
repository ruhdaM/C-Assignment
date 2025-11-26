/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;

    printf("---- Calculator Menu ----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4)
    {
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
    }

    switch (choice)
    {
    case 1:
        result = a + b;
        printf("Result = %.2f\n", result);
        break;

    case 2:
        result = a - b;
        printf("Result = %.2f\n", result);
        break;

    case 3:
        result = a * b;
        printf("Result = %.2f\n", result);
        break;

    case 4:
        if (b != 0)
            result = a / b;
        else
        {
            printf("Error: Division by zero!\n");
            return 0;
        }
        printf("Result = %.2f\n", result);
        break;

    default:
        printf("Invalid choice!\n");
    }

    return 0;
}
