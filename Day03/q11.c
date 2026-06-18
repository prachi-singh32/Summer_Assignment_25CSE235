/* 
 * Q11: Write a program to Find GCD (Greatest Common Divisor) of two numbers.
 */

#include <stdio.h>

int main() {
    int n1, n2, a, b, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    a = (n1 < 0) ? -n1 : n1;
    b = (n2 < 0) ? -n2 : n2;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    printf("The GCD of %d and %d is: %d\n", n1, n2, gcd);
    return 0;
}
