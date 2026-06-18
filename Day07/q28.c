/* 
 * Q28: Write a program to reverse a number using recursion.
 */

#include <stdio.h>
int reverseNumber(int n, int sum) {

    if (n == 0) {
        return sum;
    }
    sum = (sum * 10) + (n % 10);
    
    return reverseNumber(n / 10, sum);
}

int main() {
    int num, reversed;

    printf("Enter an integer to reverse: ");
    scanf("%d", &num);

    reversed = reverseNumber(num, 0);

    printf("Reversed number is: %d\n", reversed);

    return 0;
}
