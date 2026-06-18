/* 
 * Q31: Write a program to Print character triangle.
 * A
 * AB
 * ABC
 * ABCD
 * ABCDE
 */

#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows (1 to 26): ");
    scanf("%d", &rows);

    if (rows < 1 || rows > 26) {
        printf("Please enter a row size between 1 and 26.\n");
        return 0;
    }

    for (int i = 1; i <= rows; i++) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++; 
        }
        printf("\n");
    }

    return 0;
}
