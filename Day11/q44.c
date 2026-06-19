/* 
 * Q44: Write a program to Write function to find factorial.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>
unsigned long long calculateFactorial(int n) {
    unsigned long long fact = 1;
    
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    return fact;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number is undefined.\n");
    } else {
        unsigned long long result = calculateFactorial(num);
        printf("The factorial of %d is: %llu\n", num, result);
    }

    return 0;
}
