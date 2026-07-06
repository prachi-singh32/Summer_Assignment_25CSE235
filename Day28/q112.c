    /* 
     * Q112: Write a program to Create contact management system.
     */

#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};
int main() {

    struct Contact directory[100];
    int n, i;

    printf("Enter the number of contacts to save: ");
    scanf("%d", &n);
    while (getchar() != '\n'); 

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Contact %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", directory[i].name);

        printf("Phone Number: ");
        scanf("%s", directory[i].phone);

        printf("Email Address: ");
        scanf("%s", directory[i].email);
    }

    printf("\n===== CONTACT DIRECTORY MANAGEMENT BY PRACHI =====\n");
    printf("%-20s %-15s %-30s\n", "Name", "Phone", "Email");
    printf("-------------------------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-20s %-15s %-30s\n", directory[i].name, directory[i].phone, directory[i].email);
    }

    return 0;
}

/* Output look like this:
prachi@192 Day28 % cd "/Users/prachi/Desktop/Code/Day28/" && gcc q112.c -o q112 && "/Users/prachi/Desktop/Code/Day28/"q112
Enter the number of contacts to save: 2

Enter details for Contact 1:
Name: raj
Phone Number: 7654321233
Email Address: raj11@google.com

Enter details for Contact 2:
Name: Neha
Phone Number: 876543223
Email Address: neha11@gmail.com

===== CONTACT DIRECTORY MANAGEMENT BY PRACHI =====
Name                 Phone           Email                         
-------------------------------------------------------------------
raj                  7654321233      raj11@google.com              
Neha                 876543223       neha11@gmail.com              
prachi@192 Day28 % */