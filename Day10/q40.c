/* 
 * Q40: Write a program to Print character pyramid.
 *     A
 *    ABA
 *   ABCBA
 *  ABCDCBA
 * ABCDEDCBA
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
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        
        ch -= 2; 
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }

    return 0;
}
