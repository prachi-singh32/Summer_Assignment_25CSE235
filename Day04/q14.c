/* 
 * Q14: Write a program to Find nth Fibonacci term.
 */

#include <stdio.h>

int main() {
    int n;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the term position (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else if (n == 1) {
        printf("The 1st Fibonacci term is: %lld\n", t1);
    } else if (n == 2) {
        printf("The 2nd Fibonacci term is: %lld\n", t2);
    } else {
        
        for (int i = 3; i <= n; i++) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("The %dth Fibonacci term is: %lld\n", n, t2);
    }

    return 0;
}
