/* 
 * Q16: Write a program to Print Armstrong numbers in a range.
 */

#include <stdio.h>
#include <math.h>

int main() {
    int lower, upper, originalNum, remainder;

    printf("Enter lower limit and upper limit of the range: ");
    scanf("%d %d", &lower, &upper);

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);

    for (int num = lower; num <= upper; num++) {
        originalNum = num;
        int digits = 0;
        double result = 0.0;

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
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
