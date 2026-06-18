/* 
 * Q35: Write a program to Print repeated character pattern.
 * A
 * BB
 * CCC
 * DDDD
 * EEEEE
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
        char ch = 'A' + (i - 1);
        
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
