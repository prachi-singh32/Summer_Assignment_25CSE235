/* 
 * Q42: Write a program to Write function to find maximum between two numbers.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a, b, maxVal;

    printf("Enter two numbers to compare: ");
    scanf("%d %d", &a, &b);

    maxVal = findMax(a, b);

    printf("The maximum value is: %d\n", maxVal);

    return 0;
}
