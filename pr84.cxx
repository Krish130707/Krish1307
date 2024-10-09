#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[100];
    int year;
    float price;
};

void readBookInfo(struct Book *b) {
    printf("Enter book title: ");
    fgets(b->title, sizeof(b->title), stdin);
    
    printf("Enter author name: ");
    fgets(b->author, sizeof(b->author), stdin);
    
    printf("Enter publication year: ");
    scanf("%d", &b->year);
    
    printf("Enter price: ");
    scanf("%f", &b->price);
    
    while (getchar() != '\n');
}

void displayBookInfo(const struct Book *b) {
    printf("\nBook Information:\n");
    printf("Title: %s", b->title);
    printf("Author: %s", b->author);
    printf("Year: %d\n", b->year);
    printf("Price: %.2f\n", b->price);
}

int main() {
    struct Book myBook;
    struct Book *bookPtr = &myBook;

    readBookInfo(bookPtr);
    displayBookInfo(bookPtr);
    
    return 0;
}
