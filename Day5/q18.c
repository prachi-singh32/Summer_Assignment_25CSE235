/* 
 * Q18: Write a program to Check strong number.
 * (A number where sum of factorial of digits equals the number itself, e.g., 145)
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>
int main() {
    int num, originalNum, remainder, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    int temp = num;
    while (temp > 0) {
        remainder = temp % 10;

        int fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == originalNum && originalNum > 0) {
        printf("%d is a Strong number.\n", num);
    } else {
        printf("%d is NOT a Strong number.\n", num);
    }

    return 0;
}
