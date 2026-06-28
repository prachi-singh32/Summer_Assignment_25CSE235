/* 
 * Q78: Write a program to Check if a matrix is symmetric.
 * (A matrix is symmetric if it is equal to its transpose)
 */

#include <stdio.h>
int main() {
    int rows, cols, isSymmetric = 1;

    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("The matrix is NOT symmetric (it is not a square matrix).\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric) {
        printf("The matrix is a Symmetric Matrix.\n");
    } else {
        printf("The matrix is NOT a Symmetric Matrix.\n");
    }

    return 0;
}
