/*
 * Q118: Mini Library System
 */

#include <stdio.h>
#include <string.h>

int main() {

    int id[100];
    char book[100][50];
    char author[100][50];

    int total=0,choice,i,search;

    while(1)
    {
        printf("\n===== MINI LIBRARY SYSTEM BY PRACHI =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Book ID: ");
                scanf("%d",&id[total]);

                printf("Book Name: ");
                scanf(" %[^\n]",book[total]);

                printf("Author: ");
                scanf(" %[^\n]",author[total]);

                total++;

                printf("Book Added Successfully.\n");
                break;

            case 2:

                printf("\nID\tBook\t\tAuthor\n");

                for(i=0;i<total;i++)
                    printf("%d\t%-15s%s\n",id[i],book[i],author[i]);

                break;

            case 3:

                printf("Enter Book ID: ");
                scanf("%d",&search);

                for(i=0;i<total;i++)
                {
                    if(id[i]==search)
                    {
                        printf("\nBook Found\n");
                        printf("Book : %s\n",book[i]);
                        printf("Author : %s\n",author[i]);
                        break;
                    }
                }

                if(i==total)
                    printf("Book Not Found.\n");

                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}

/* Output looks like this:
prachi@192 Day30 % cd "/Users/prachi/Desktop/Code/Day30/" && gcc q118.c -o q118 && "/Users/prachi/Desktop/Code/Day30/"q118

===== MINI LIBRARY SYSTEM BY PRACHI =====
1. Add Book
2. Display Books
3. Search Book
4. Exit
Enter Choice: 1
Book ID: 33
Book Name: python
Author: A dev
Book Added Successfully.

===== MINI LIBRARY SYSTEM BY PRACHI =====
1. Add Book
2. Display Books
3. Search Book
4. Exit
Enter Choice: 1
Book ID: java
Book Name: Author: A Raj
Book Added Successfully.

===== MINI LIBRARY SYSTEM BY PRACHI =====
1. Add Book
2. Display Books
3. Search Book
4. Exit
Enter Choice: 2

ID      Book            Author
33      python         A dev
0       java           A Raj

===== MINI LIBRARY SYSTEM BY PRACHI =====
1. Add Book
2. Display Books
3. Search Book
4. Exit
Enter Choice: 4
prachi@192 Day30 % */