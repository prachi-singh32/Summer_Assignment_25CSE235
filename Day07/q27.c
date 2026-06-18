/* 
 * Q27: Write a program to find the sum of digits using recursion.
 */

#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int absoluteNum = (num < 0) ? -num : num;

    result = sumOfDigits(absoluteNum);
    printf("Sum of digits of %d is: %d\n", num, result);

    return 0;
}
