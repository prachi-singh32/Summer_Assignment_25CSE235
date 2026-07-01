/* 
  * Q91: Write a program to Check anagram strings.
  
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, isAnagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        isAnagram = 0;
    } else {

        for (i = 0; str1[i] != '\0'; i++) {
            freq[(unsigned char)str1[i]]++;
            freq[(unsigned char)str2[i]]--;
        }

        for (i = 0; i < 256; i++) {
            if (freq[i] != 0) {
                isAnagram = 0;
                break;
            }
        }
    }
    if (isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}
