    /* 
     * Q103: Write a program to Create ATM simulation.
     */

#include <stdio.h>

int main() {

    int choice;
    float balance = 5000.0; 
    float amount;

    while (1) {
        printf("\n===== ATM SIMULATION BY PRACHI =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: $");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("$%.2f deposited successfully.\n", amount);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: $");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance! Transaction failed.\n");
                } else if (amount <= 0) {
                    printf("Invalid withdrawal amount.\n");
                } else {
                    balance -= amount;
                    printf("$%.2f withdrawn successfully.\n", amount);
                }
                break;
            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid selection! Please choose a valid option.\n");
        }
    }
}
