/* 
 * Q29: Write a program to Print half pyramid pattern using stars (*).
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
