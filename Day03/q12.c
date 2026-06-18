/* 
 * Q12: Write a program to Find LCM (Lowest Common Multiple) of two numbers.
 */

#include <stdio.h>

int main() {
    int n1, n2, a, b, gcd, lcm;

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

    // Formula: LCM = (a * b) / GCD
    lcm = ((n1 < 0 ? -n1 : n1) / gcd) * (n2 < 0 ? -n2 : n2);

    printf("The LCM of %d and %d is: %d\n", n1, n2, lcm);
    return 0;
}
