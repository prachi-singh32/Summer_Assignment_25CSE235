   /* 
     * Q104: Write a program to Create quiz application.
     */

#include <stdio.h>
int main() {
 
    int answer;
    int score = 0;

     printf("\n===== DEVELOPED BY PRACHI =====\n");
    printf("Welcome to the C Programming Quiz!\n");
    printf("Please answer by entering the option number (1-4).\n\n");


    printf("Q1. Which of the following is the correct format specifier for an integer in C?\n");
    printf("1. %%f\n2. %%c\n3. %%d\n4. %%s\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer! The correct choice was 3 (%%d).\n\n");
    }

    printf("Q2. Which function is used to read a string with spaces in C?\n");
    printf("1. scanf()\n2. fgets()\n3. printf()\n4. strlen()\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer! The correct choice was 2 (fgets).\n\n");
    }

    printf("Q3. What is the index of the first element in a C array?\n");
    printf("1. 1\n2. -1\n3. 0\n4. Depends on array size\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer! The correct choice was 3 (0).\n\n");
    }

    printf("--- Quiz Completed ---\n");
    printf("Your total score: %d out of 3\n", score);

    return 0;
}
