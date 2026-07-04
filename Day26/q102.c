    /* 
     * Q102: Write a program to Create voting eligibility system.
     */

#include <stdio.h>

int main() {
    int age;
    char name[50]; 

    printf("Enter your name: ");
    scanf("%s", name); 
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n--- Voting Eligibility Status ---\n");
    if (age >= 18) {
        printf("Hello %s, you are eligible to vote!\n", name);
    } else {
        int yearsLeft = 18 - age;
        printf("Hello %s, you are not eligible to vote yet.\n", name);
        printf("You need to wait %d more year(s) to become eligible.\n", yearsLeft);
    }

    return 0;
}
