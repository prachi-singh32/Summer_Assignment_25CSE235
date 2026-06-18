/* 
 * Q24: Write a program to Find x^n without pow().
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exponent;

    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exponent);

    int absExponent = (exponent < 0) ? -exponent : exponent;
    for (int i = 1; i <= absExponent; i++) {
        result *= base;
    }

    if (exponent < 0) {
        if (result == 0) {
            printf("Error: Division by zero (undefined result).\n");
            return 0;
        }
        result = 1.0 / result;
    }

    printf("Result of %.2lf^%d is %.4lf\n", base, exponent, result);
    return 0;
}
