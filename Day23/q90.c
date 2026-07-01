    /* 
     * Q90: Write a program to Find first repeating character.
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
        unsigned char ch = str[i];
        if (freq[ch] > 0) {
            printf("The first repeating character is: '%c'\n", str[i]);
            found = 1;
            break;
        }
        freq[ch]++;
    }

    if (!found) {
        printf("No repeating characters found.\n");
    }

    return 0;
}
