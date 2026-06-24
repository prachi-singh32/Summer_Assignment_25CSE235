/* 
 * Q64: Write a program to Remove duplicates from an array (Modify array in-place).
 */

#include <stdio.h>
int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int updatedSize = size;

    for (int i = 0; i < updatedSize; i++) {
        for (int j = i + 1; j < updatedSize; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < updatedSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                updatedSize--;
                j--; 
            }
        }
    }
    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < updatedSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
