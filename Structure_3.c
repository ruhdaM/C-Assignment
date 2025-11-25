/*
Name- Madhur Raaj
Roll No- 125113049
Branch- Microelectronics and VLSI Engineering
Section- MV-A-03
*/

#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of book %d:\n", i + 1);

        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);

        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    printf("\nBooks Priced Above 500\n");
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (b[i].price > 500) {
            found = 1;
            printf("\nTitle: %s\n", b[i].title);
            printf("Author: %s\n", b[i].author);
            printf("Price: %.2f\n", b[i].price);
        }
    }

    if (!found) {
        printf("No books priced above 500.\n");
    }

    return 0;
}
