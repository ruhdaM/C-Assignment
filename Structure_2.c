/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    int n, index = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > s[index].marks)
        {
            index = i;
        }
    }

    printf("\nStudent with Highest Marks\n");
    printf("Roll: %d\n", s[index].roll);
    printf("Name: %s\n", s[index].name);
    printf("Marks: %.2f\n", s[index].marks);

    return 0;
}
