/* 
 * Q37: Write a program to Print star pyramid.
 *     *
 *    ***
 *   *****
 *  *******
 * *********
 */

#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Step 2: Print stars (formula: 2 * i - 1)
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
