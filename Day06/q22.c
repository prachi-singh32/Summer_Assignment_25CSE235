/* 
 * Q22: Write a program to Convert binary to decimal.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int main() {
    long long binaryNum;
    int decimalNum = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    long long temp = binaryNum;
    while (temp > 0) {
        remainder = temp % 10;
        
        if (remainder != 0 && remainder != 1) {
            printf("Error: Invalid binary digit entered.\n");
            return 0;
        }

        decimalNum += remainder * base;
        base = base * 2; 
        temp = temp / 10;
    }

    printf("Decimal equivalent of %lld is: %d\n", binaryNum, decimalNum);
    return 0;
}
