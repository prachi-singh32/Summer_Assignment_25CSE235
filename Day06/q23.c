/* 
 * Q23: Write a program to Count set bits in a number.
 * (Set bits are the bits that are set to 1 in the binary representation of a number)
 * Company Information: TCS, Infosys, Wipro
 */

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;
    
    while (temp > 0) {
        temp = temp & (temp - 1); 
        count++;
    }

    printf("Number of set bits (1s) in %d is: %d\n", num, count);
    return 0;
}
