/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

void callByValue(int a) {
    a = a + 10;
    printf("Inside callByValue function: a = %d\n", a);
}

void callByReference(int *b) {
    *b = *b + 10;
    printf("Inside callByReference function: b = %d\n", *b);
}

int main() {
    int x = 5, y = 5;

    printf("Before callByValue: x = %d\n", x);
    callByValue(x);
    printf("After callByValue: x = %d\n\n", x);

    printf("Before callByReference: y = %d\n", y);
    callByReference(&y);
    printf("After callByReference: y = %d\n", y);

    return 0;
}
