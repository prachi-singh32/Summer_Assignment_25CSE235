/* 
 * Q71: Write a program to implement Binary Search.
 * Note: Binary Search requires a sorted array to work correctly.
 */

#include <stdio.h>

int main() {
    int size, target, foundIndex = -1;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements IN SORTED ORDER (Ascending):\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (arr[mid] == target) {
            foundIndex = mid;
            break; 
        } else if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    if (foundIndex != -1) {
        printf("Element %d found at index position: %d\n", target, foundIndex);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}
