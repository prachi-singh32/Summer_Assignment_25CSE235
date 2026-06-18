/* 
 * Q26: Write a program to display the Fibonacci series using recursion.
 */

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Please enter a number greater than 0.\n");
    } else {
        printf("Fibonacci Series: ");
        for (int i = 0; i < terms; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}
