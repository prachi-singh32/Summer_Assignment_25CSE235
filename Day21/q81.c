/* 
 * Q81: Write a program to Find string length without using strlen().
 */

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    while (str[length] != '\0') {
        length++;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}
