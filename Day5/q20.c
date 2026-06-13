/* 
 * Q20: Write a program to Find largest prime factor.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int main() {
    long long num, temp, largest_pf = -1;

    printf("Enter a positive integer: ");
    scanf("%lld", &num);

    temp = num;

    if (temp <= 1) {
        printf("No prime factors exist for numbers less than or equal to 1.\n");
        return 0;
    }

    while (temp % 2 == 0) {
        largest_pf = 2;
        temp /= 2;
    }

    for (long long i = 3; i * i <= temp; i += 2) {
        while (temp % i == 0) {
            largest_pf = i;
            temp /= i;
        }
    }
    if (temp > 2) {
        largest_pf = temp;
    }

    printf("The largest prime factor of %lld is: %lld\n", num, largest_pf);
    return 0;
}
