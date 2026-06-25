/* 
 * Q67: Write a program to find the Intersection of two arrays (unique common elements).
 * Company Information: Amazon, Deloitte, Capgemini
 */

#include <stdio.h>

int main() {
    int size1, size2;

    printf("Enter size of first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < size1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < size2; i++) scanf("%d", &arr2[i]);

    int intersectionArr[size1 < size2 ? size1 : size2];
    int intersectSize = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                int alreadyAdded = 0;
                for (int k = 0; k < intersectSize; k++) {
                    if (arr1[i] == intersectionArr[k]) {
                        alreadyAdded = 1;
                        break;
                    }
                }
                if (!alreadyAdded) {
                    intersectionArr[intersectSize++] = arr1[i];
                }
                break; 
            }
        }
    }
    printf("\nIntersection of the two arrays: ");
    if (intersectSize == 0) {
        printf("No common elements found.");
    } else {
        for (int i = 0; i < intersectSize; i++) {
            printf("%d ", intersectionArr[i]);
        }
    }
    printf("\n");

    return 0;
}
