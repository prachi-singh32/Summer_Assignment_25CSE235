/* 
 * Q68: Write a program to Find common elements from three arrays.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>
int main() {
    int size1, size2, size3;

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

    printf("Enter size of third array: ");
    scanf("%d", &size3);
    int arr3[size3];
    printf("Enter elements of third array:\n");
    for (int i = 0; i < size3; i++) scanf("%d", &arr3[i]);

    int minSize = (size1 < size2) ? (size1 < size3 ? size1 : size3) : (size2 < size3 ? size2 : size3);
    int commonArr[minSize];
    int commonCount = 0;

    for (int i = 0; i < size1; i++) {
        int foundInArr2 = 0, foundInArr3 = 0;

        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                foundInArr2 = 1;
                break;
            }
        }
        for (int j = 0; j < size3; j++) {
            if (arr1[i] == arr3[j]) {
                foundInArr3 = 1;
                break;
            }
        }
        if (foundInArr2 && foundInArr3) {
            int alreadyAdded = 0;
            for (int k = 0; k < commonCount; k++) {
                if (arr1[i] == commonArr[k]) {
                    alreadyAdded = 1;
                    break;
                }
            }
            if (!alreadyAdded) {
                commonArr[commonCount++] = arr1[i];
            }
        }
    }

    printf("\nCommon elements in all three arrays: ");
    if (commonCount == 0) {
        printf("None");
    } else {
        for (int i = 0; i < commonCount; i++) {
            printf("%d ", commonArr[i]);
        }
    }
    printf("\n");

    return 0;
}
