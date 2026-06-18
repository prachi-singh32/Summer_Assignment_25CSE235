/* 
 * Q19: Write a program to Print factors of a number.
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int absoluteNum = (num < 0) ? -num : num;

    printf("Factors of %d are: ", num);
    
    if (absoluteNum == 0) {
        printf("Infinite (Every non-zero number is a factor of 0)\n");
        return 0;
    }

    for (int i = 1; i <= absoluteNum; i++) {
        if (absoluteNum % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
