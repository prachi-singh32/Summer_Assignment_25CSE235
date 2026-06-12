/* 
 * Q15: Write a program to Check Armstrong number.
 */

#include <stdio.h>
#include <math.h> // Required for pow() function

int main() {
    int num, originalNum, remainder, digits = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if ((int)result == originalNum) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is NOT an Armstrong number.\n", num);
    }

    return 0;
}
