/* 
 * Q56: Write a program to Find duplicates in an array.
 */

#include <stdio.h>

int main() {
    int size, hasDuplicates = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int visited[size]; 

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; 
    }

    printf("Duplicate elements found in the array: ");

    for (int i = 0; i < size; i++) {
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; 
            }
        }

        if (count > 1) {
            printf("%d ", arr[i]);
            hasDuplicates = 1;
        }
    }

    if (!hasDuplicates) {
        printf("None");
    }
    printf("\n");

    return 0;
}
