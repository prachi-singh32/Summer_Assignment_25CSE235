    /* 
     * Q101: Write a program to Create number guessing game.
     */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int secretNumber, guess, attempts = 0;

    srand(time(0));
    secretNumber = (rand() % 100) + 1; 

    printf("\n===== DEVELOPED BY PRACHI =====\n");
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a secret number between 1 and 100.\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high! Try a lower number.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try a higher number.\n");
        } else {
            printf("\nCongratulations! You guessed the secret number %d in %d attempts.\n", secretNumber, attempts);
        }
    } while (guess != secretNumber);

    return 0;
}
