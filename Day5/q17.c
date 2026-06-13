/* 
 * Q17: Write a program to Check perfect number.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is NOT a Perfect number.\n", num);
    }

    return 0;
}
