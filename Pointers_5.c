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
    float marks;
};

int main()
{
    struct Student s;
    struct Student *p = &s;

    printf("Enter roll number: ");
    scanf("%d", &p->roll);

    printf("Enter marks: ");
    scanf("%f", &p->marks);

    p->roll = p->roll + 1;
    p->marks = p->marks + 5;

    printf("%d %.2f", p->roll, p->marks);

    return 0;
}
