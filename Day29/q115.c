/*
 * Q115: Write a program to Create menu-driven string operations system.
 */

#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    char temp[100];
    int choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (1) {

        printf("\n===== STRING OPERATIONS MENU BY PRACHI =====\n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Copy String\n");
        printf("4. Reverse String\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("String: %s\n", str);
                break;

            case 2:
                printf("Length = %lu\n", strlen(str));
                break;

            case 3:
                strcpy(temp, str);
                printf("Copied String: %s\n", temp);
                break;

            case 4: {
                int i;

                strcpy(temp, str);

                for (i = strlen(temp) - 1; i >= 0; i--)
                    printf("%c", temp[i]);

                printf("\n");
                break;
}               

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

/* Output look like this:
prachi@192 Day29 % cd "/Users/prachi/Desktop/Code/Day29/" && gcc q115.c -o q115 && "/Users/prachi/Desktop/Code/Day29/"q115
Enter a string: PRACHI

===== STRING OPERATIONS MENU BY PRACHI =====
1. Display String
2. Find Length
3. Copy String
4. Reverse String
5. Exit
Enter your choice: 1
String: PRACHI

===== STRING OPERATIONS MENU BY PRACHI =====
1. Display String
2. Find Length
3. Copy String
4. Reverse String
5. Exit
Enter your choice: 4
IHCARP

===== STRING OPERATIONS MENU BY PRACHI =====
1. Display String
2. Find Length
3. Copy String
4. Reverse String
5. Exit
Enter your choice: 2
Length = 6

===== STRING OPERATIONS MENU BY PRACHI =====
1. Display String
2. Find Length
3. Copy String
4. Reverse String
5. Exit
Enter your choice: 3
Copied String: PRACHI

===== STRING OPERATIONS MENU BY PRACHI =====
1. Display String
2. Find Length
3. Copy String
4. Reverse String
5. Exit
Enter your choice: 5
Exiting...
prachi@192 Day29 % */