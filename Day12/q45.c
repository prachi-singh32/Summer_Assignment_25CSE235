/* 
 * Q45: Write a program to Write function for palindrome.
 */

#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0, remainder;

    if (num < 0) {
        return 0;
    }

    while (num > 0) {
        remainder = num % 10;
        reversedNum = (reversedNum * 10) + remainder;
        num /= 10;
    }

    return (originalNum == reversedNum);
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (isPalindrome(n)) {
        printf("%d is a Palindrome number.\n", n);
    } else {
        printf("%d is NOT a Palindrome number.\n", n);
    }

    return 0;
}
