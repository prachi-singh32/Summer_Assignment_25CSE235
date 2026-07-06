    /* 
     * Q110: Write a program to Create bank account system.
     */

#include <stdio.h>

struct Account {
    int accNo;
    char holderName[50];
    float balance;
};

int main() {

    struct Account accounts[100];
    int n, i;

    printf("Enter the number of bank accounts to create: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Account %d:\n", i + 1);
        
        printf("Account Number: ");
        scanf("%d", &accounts[i].accNo);
        while (getchar() != '\n'); 

        printf("Account Holder Name: ");
        scanf("%s", accounts[i].holderName);

        printf("Initial Balance: $");
        scanf("%f", &accounts[i].balance);
    }

    printf("\n===== BANK ACCOUNT ACCREDITATION BY PRACHI =====\n");
    printf("%-15s %-25s %-15s\n", "Account No", "Holder Name", "Balance");
    printf("------------------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-15d %-25s $%-14.2f\n", accounts[i].accNo, accounts[i].holderName, accounts[i].balance);
    }

    return 0;
}

/* Output look like this:
prachi@192 Day28 % cd "/Users/prachi/Desktop/Code/Day28/" && gcc q110.c -o q110 && "/Users/prachi/Desktop/Code/Day28/"q110
Enter the number of bank accounts to create: 2

Enter details for Account 1:
Account Number: 543
Account Holder Name: Prachi
Initial Balance: $500

Enter details for Account 2:
Account Number: 432
Account Holder Name: Richa
Initial Balance: $450

===== BANK ACCOUNT ACCREDITATION BY PRACHI =====
Account No      Holder Name               Balance        
------------------------------------------------------------
543             Prachi                    $500.00        
432             Richa                     $450.00        
prachi@192 Day28 % 
*/