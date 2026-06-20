/* 
 * Q50: Write a program to Find sum and average of array.
 */

#include <stdio.h>

int main() {
    int size, sum = 0;
    double average;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 0;
    }

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (double)sum / size;

    printf("\nSum of elements: %d\n", sum);
    printf("Average of elements: %.2lf\n", average);

    return 0;
}
