/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

struct Employee
{
    char name[50];
    float basic;
    float da;
    float hra;
};

int main()
{
    struct Employee e;
    float gross;

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basic);

    printf("Enter DA: ");
    scanf("%f", &e.da);

    printf("Enter HRA: ");
    scanf("%f", &e.hra);

    gross = e.basic + e.da + e.hra;

    printf("\nEmployee Salary Details\n");
    printf("Name: %s\n", e.name);
    printf("Basic Salary: %.2f\n", e.basic);
    printf("DA: %.2f\n", e.da);
    printf("HRA: %.2f\n", e.hra);
    printf("Gross Salary: %.2f\n", gross);

    return 0;
}
