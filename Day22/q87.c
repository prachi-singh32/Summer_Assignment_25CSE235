    /* 
      * Q87: Write a program to Character frequency.
     */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Character frequencies:\n");
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > 0) {
            printf("'%c' occurs %d times\n", str[i], freq[(unsigned char)str[i]]);
            freq[(unsigned char)str[i]] = 0;
        }
    }

    return 0;
}
