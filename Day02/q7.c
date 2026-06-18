/* 
 * Q7: Write a program to Find product of digits.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int main() {
    long long num, temp;
    long long product = 1;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = num;

    if (temp == 0) {
        product = 0;
    } else {
        if (temp < 0) {
            temp = -temp;
        }
        while (temp != 0) {
            product *= (temp % 10); 
            temp /= 10;
        }
    }

    printf("The product of digits of %lld is: %lld\n", num, product);
    return 0;
}
