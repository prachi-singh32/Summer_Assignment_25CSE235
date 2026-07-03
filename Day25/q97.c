  // Q97: Write a program to Merge two sorted arrays.
  
#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter number of elements in first sorted array: ");
    scanf("%d", &n1);
    printf("Enter elements of first sorted array: ");
    for(int x = 0; x < n1; x++) scanf("%d", &arr1[x]);

    printf("Enter number of elements in second sorted array: ");
    scanf("%d", &n2);
    printf("Enter elements of second sorted array: ");
    for(int x = 0; x < n2; x++) scanf("%d", &arr2[x]);

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n1) merged[k++] = arr1[i++];
    while (j < n2) merged[k++] = arr2[j++];

    printf("Merged sorted array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
