/* 
    * Q86: Write a program to Count words in a sentence.
*/
    
#include <stdio.h>
#include <string.h>

int main() {

    char str[200];
    int i, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (str[i+1] == ' ' || str[i+1] == '\t' || str[i+1] == '\n' || str[i+1] == '\0') {
                words++;
            }
        }
    }

    printf("Total number of words: %d\n", words);
    return 0;
}
