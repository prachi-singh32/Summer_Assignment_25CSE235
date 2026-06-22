/* 
 * Q54: Write a program to find the Frequency of an element in an array.
 */

#include <stdio.h>

int main() {
    int size, searchElement, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find its frequency count: ");
    scanf("%d", &searchElement);

    for (int i = 0; i < size; i++) {
        if (arr[i] == searchElement) {
            count++;
        }
    }

    printf("The element %d occurs %d time(s) in the array.\n", searchElement, count);

    return 0;
}
