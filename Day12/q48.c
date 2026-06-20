/* 
 * Q48: Write a program to Write function for perfect number checking.
 */

#include <stdio.h>
int isPerfect(int num) {
    int sum = 0;

    if (num <= 1) {
        return 0;
    }

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return (sum == num);
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (isPerfect(n)) {
        printf("%d is a Perfect number.\n", n);
    } else {
        printf("%d is NOT a Perfect number.\n", n);
    }

    return 0;
}
