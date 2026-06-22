/* 
 * Q53: Write a program to perform Linear Search in an array.
 */

#include <stdio.h>

int main() {
    int size, target, foundIndex = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break; 
        }
    }

    if (foundIndex != -1) {
        printf("Element %d found at index position: %d\n", target, foundIndex);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}
