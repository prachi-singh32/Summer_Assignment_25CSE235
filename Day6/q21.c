/* 
 * Q21: Write a program to Convert decimal to binary.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int main() {
    int decimalNum;
    int binaryNum[32]; 
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    if (decimalNum < 0) {
        printf("This program handles non-negative integers. Enter a positive number.\n");
        return 0;
    }

    // Edge case for zero
    if (decimalNum == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    int temp = decimalNum;
    while (temp > 0) {
        binaryNum[i] = temp % 2;
        temp = temp / 2;
        i++;
    }

    printf("Binary equivalent: ");
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

    return 0;
}
