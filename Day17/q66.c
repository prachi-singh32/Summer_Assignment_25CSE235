/* 
 * Q66: Write a program to find the Union of two arrays (unique elements from both arrays).
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

    int unionArr[size1 + size2];
    int unionSize = 0;

    for (int i = 0; i < size1; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < unionSize; j++) {
            if (arr1[i] == unionArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unionArr[unionSize++] = arr1[i];
        }
    }

    for (int i = 0; i < size2; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < unionSize; j++) {
            if (arr2[i] == unionArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unionArr[unionSize++] = arr2[i];
        }
    }
    printf("\nUnion of the two arrays: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
    return 0;
}
