/* 
 * Q8: Write a program to Check whether a number is palindrome.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int main() {
    long long num, temp, reversed = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = num;

    if (temp < 0) {
        temp = -temp;
    }

    while (temp != 0) {
        int remainder = temp % 10;
        reversed = (reversed * 10) + remainder;
        temp /= 10;
    }

    long long original_absolute = (num < 0) ? -num : num;

    if (original_absolute == reversed) {
        printf("%lld is a Palindrome number.\n", num);
    } else {
        printf("%lld is NOT a Palindrome number.\n", num);
    }

    return 0;
}
