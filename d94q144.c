// Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[50];
    int pages;
};

void print_book_details(struct Book b) {
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Pages: %d\n", b.pages);
}

int main() {
    struct Book my_book;
    
    strcpy(my_book.title, "The Great Adventure");
    strcpy(my_book.author, "J. Smith");
    my_book.pages = 350;

    printf("--- Book Details ---\n");
    print_book_details(my_book);
    printf("--------------------\n");

    return 0;
}