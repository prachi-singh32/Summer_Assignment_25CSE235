  /* 
   * Q89: Write a program to Find first non-repeating character.
   */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("The first non-repeating character is: '%c'\n", str[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("All characters are repeating.\n");
    }

    return 0;
}
