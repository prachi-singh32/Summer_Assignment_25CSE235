/* 
     * Q109: Write a program to Create library management system.
     */

#include <stdio.h>
#include <string.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
};

int main() {
    struct Book library[100];
    int n, i;

    printf("Enter the number of books to add: ");
    scanf("%d", &n);
    while (getchar() != '\n'); 

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        
        printf("Book ID: ");
        scanf("%d", &library[i].bookId);
        while (getchar() != '\n'); 

        printf("Title: ");
        fgets(library[i].title, sizeof(library[i].title), stdin);
        library[i].title[strcspn(library[i].title, "\n")] = '\0'; // Remove trailing newline character

        printf("Author: ");
        fgets(library[i].author, sizeof(library[i].author), stdin);
        library[i].author[strcspn(library[i].author, "\n")] = '\0'; // Remove trailing newline character
    }

    printf("\n===== LIBRARY MANAGEMENT SYSTEM BY PRACHI =====\n");
    printf("%-10s %-25s %-25s\n", "Book ID", "Title", "Author");
    printf("------------------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-10d %-25s %-25s\n", library[i].bookId, library[i].title, library[i].author);
    }

    return 0;
}

/* Output look like this:
prachi@192 Day28 % cd "/Users/prachi/Desktop/Code/Day28/" && gcc q109.c -o q109 && "/Users/prachi/Desktop/Code/Day28/"q109
Enter the number of books to add: 2

Enter details for Book 1:
Book ID: 23
Title: DSA
Author: Raj

Enter details for Book 2:
Book ID: 45
Title: CN
Author: Prachi

===== LIBRARY MANAGEMENT SYSTEM BY PRACHI =====
Book ID    Title                     Author                   
------------------------------------------------------------
23         DSA                       Raj                      
45         CN                        Prachi                   
prachi@192 Day28 % 
*/