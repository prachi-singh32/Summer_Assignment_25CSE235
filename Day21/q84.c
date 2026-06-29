/* 
 * Q84: Write a program to Convert lowercase characters to uppercase.
 */

#include <stdio.h>

int main() {
    char str[150];

    printf("Enter a string in lowercase or mixed case: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("String in Uppercase: %s\n", str);

    return 0;
}
