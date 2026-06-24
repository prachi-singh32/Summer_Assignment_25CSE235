/* 
 * Q61: Write a program to Find the missing number in an array of size N-1 containing distinct integers from 1 to N.
 */

#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of N (range 1 to N): ");
    scanf("%d", &n);

    int size = n - 1;
    int arr[size];

    printf("Enter %d distinct elements between 1 and %d:\n", size, n);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    long long expectedSum = (long long)n * (n + 1) / 2;

    long long actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    int missingNumber = (int)(expectedSum - actualSum);

    printf("The missing number is: %d\n", missingNumber);

    return 0;
}
