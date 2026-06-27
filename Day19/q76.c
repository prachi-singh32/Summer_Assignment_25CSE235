/* 
 * Q76: Write a program to Find the diagonal sum (both Primary and Secondary) of a Square Matrix.
 */

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &size);

    int matrix[size][size];
    int primarySum = 0, secondarySum = 0;

    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < size; i++) {
        primarySum += matrix[i][i];               
        secondarySum += matrix[i][size - 1 - i]; 
    }

    printf("\nPrimary Diagonal Sum: %d\n", primarySum);
    printf("Secondary Diagonal Sum: %d\n", secondarySum);

    return 0;
}
