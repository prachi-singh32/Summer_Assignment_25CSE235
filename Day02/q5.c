/* 
 * Q5: Write a program to Find sum of digits of a number.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int main() {
    long long num, temp;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = num; 

    if (temp < 0) {
        temp = -temp;
    }

    while (temp != 0) {
        sum += (temp % 10); 
        temp /= 10;        
    }

    printf("The sum of digits of %lld is: %d\n", num, sum);
    return 0;
}
