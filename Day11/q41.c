/* 
 * Q41: Write a program to Write function to find sum of two numbers.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int findSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, total;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    total = findSum(num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, total);

    return 0;
}
