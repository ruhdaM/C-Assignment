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
    int roll;
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;
    int n;

    fp = fopen("students.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s.name);

        printf("Roll Number: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    printf("\nRecords stored successfully!\n\n");

    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Student Records:\n");
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) != EOF)
    {
        printf("Name: %s\tRoll: %d\tMarks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}
