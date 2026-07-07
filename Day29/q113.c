    /* 
     * Q113: Write a program to Create menu-driven calculator.
     */
#include <stdio.h>

int main() {

    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n===== CALCULATOR MENU =====\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting Calculator. Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed!\n");
                }
                break;
            default:
                printf("Invalid choice! Please choose between 1 and 5.\n");
        }
    }
    return 0;
}

/* Output look like this:
prachi@192 Code % cd "/Users/prachi/Desktop/Code/Day29/" && gcc q113.c -o q113 && "/Users/prachi/Desktop/Code/Day29/"q113

===== CALCULATOR MENU =====
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Exit
Enter your choice (1-5): 1
Enter two numbers: 23
444
Result: 23.00 + 444.00 = 467.00

===== CALCULATOR MENU =====
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Exit
Enter your choice (1-5): 5
Exiting Calculator. Goodbye!
prachi@192 Day29 % */