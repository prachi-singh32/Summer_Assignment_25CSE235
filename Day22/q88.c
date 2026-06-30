    /* 
     * Q88: Write a program to Remove spaces from string.
     */
    
#include <stdio.h>

int main() {
    char str[200];
    int i, j = 0;

    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String after removing spaces: %s", str);
    return 0;
}
