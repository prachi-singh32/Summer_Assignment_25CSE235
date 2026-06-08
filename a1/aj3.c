#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt user for input
    printf("Enter two integers: ");
    
    // Read input from the keyboard
    scanf("%d %d", &num1, &num2);

    // Calculate sum
    sum = num1 + num2;

    // Print the result
    printf("The sum is: %d\n", sum);

    return 0;
}
