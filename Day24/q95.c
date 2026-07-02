    /* 
     * Q95: Write a program to Find longest word.
     */

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50] = "", current[50] = "";
    int i, j = 0, max_len = 0, cur_len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0') {
            current[j] = '\0';
            cur_len = strlen(current);
            
            if (cur_len > max_len) {
                max_len = cur_len;
                strcpy(longest, current);
            }
            j = 0;
        } else {
            current[j++] = str[i];
        }
    }
    printf("The longest word is: %s\n", longest);
    return 0;
}
