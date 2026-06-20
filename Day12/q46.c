/* 
 * Q46: Write a program to Write function for Armstrong.
 */

#include <stdio.h>
#include <math.h> 

int isArmstrong(int num) {
    int originalNum = num;
    int digits = 0, remainder;
    double sum = 0.0;

    if (num < 0) {
        return 0;
    }

    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    return ((int)sum == originalNum);
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is NOT an Armstrong number.\n", n);
    }

    return 0;
}
