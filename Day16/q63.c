/* 
 * Q63: Write a program to Find a pair with a given target sum in an array.
 */

#include <stdio.h>

int main() {
    int size, targetSum, foundPair = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &targetSum);
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                foundPair = 1;
            }
        }
    }

    if (!foundPair) {
        printf("No pair found with the given sum %d.\n", targetSum);
    }

    return 0;
}
