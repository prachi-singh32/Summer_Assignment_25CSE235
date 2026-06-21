/* 
 * Q49: Write a program to Input and display array.
 */

#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements in the array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
