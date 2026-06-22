/* 
 * Q55: Write a program to find the Second Largest element in an array.
 */

#include <stdio.h>
#include <limits.h> 

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Array must contain at least 2 elements to find a second largest value.\n");
        return 0;
    }

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1; 
            max1 = arr[i]; 
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i]; 
        }
    }

    if (max2 == INT_MIN) {
        printf("There is no unique second largest element (all elements are equal).\n");
    } else {
        printf("The largest element is: %d\n", max1);
        printf("The second largest element is: %d\n", max2);
    }

    return 0;
}
