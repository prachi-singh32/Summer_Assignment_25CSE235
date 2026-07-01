    /* 
     * Q92: Write a program to Find maximum occurring character.
     */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max = -1;
    char maxChar;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }
    printf("The maximum occurring character is '%c' (occurs %d times).\n", maxChar, max);
    return 0;
}
