/* 
 * Q43: Write a program to Write function to check prime.
 * Returns 1 if prime, 0 if not prime.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; // It is prime
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is NOT a Prime number.\n", num);
    }

    return 0;
}
