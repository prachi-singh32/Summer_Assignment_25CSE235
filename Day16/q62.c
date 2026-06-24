/* 
 * Q62: Write a program to Find the maximum frequency element in an array.
 */

#include <stdio.h>
int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int visited[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; 
    }

    int maxFrequency = 0;
    int maxFreqElement = arr[0];

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
        if (count > maxFrequency) {
            maxFrequency = count;
            maxFreqElement = arr[i];
        }
    }

    printf("Element with maximum frequency is %d (occurs %d times).\n", maxFreqElement, maxFrequency);

    return 0;
}
