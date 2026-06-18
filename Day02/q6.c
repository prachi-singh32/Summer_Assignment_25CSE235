/* 
 * Q6: Write a program to Reverse a number.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int main() {
    long long num, temp, reversed = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = num;

    while (temp != 0) {
        int remainder = temp % 10;
        reversed = (reversed * 10) + remainder; 
        temp /= 10;
    }

    printf("The reversed number is: %lld\n", reversed);
    return 0;
}
