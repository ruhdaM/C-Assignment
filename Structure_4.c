/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

struct Student
{
    char name[50];
    float marks;
};

int main()
{
    int n;
    float sum = 0, avg;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        sum += s[i].marks;
    }

    avg = sum / n;

    printf("\nAverage Marks of %d students = %.2f\n", n, avg);

    return 0;
}
