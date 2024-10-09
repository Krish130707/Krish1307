#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int luckyNumber, guess;
    int maxAttempts = 10;

    // Seed the random number generator
    srand(time(0));
    luckyNumber = rand() % 100 + 1;
     // Random number between 1 and 100
    //above two line is taken from chatgpt

    printf("Welcome to the Guessing Game!\n");
    printf("Guess the lucky number between 1 and 100.\n");

    for (int i = 1; i <= maxAttempts; i++) {
        printf("Attempt %d of %d: Enter your guess: ", i, maxAttempts);
        scanf("%d", &guess);

        if (guess == luckyNumber) {
            printf("Congratulations! You guessed the lucky number: %d\n", luckyNumber);
            break; 
            // Exit the loop if guessed correctly
        } else if (guess < luckyNumber) {
            printf("guess high number");
        } else {
            printf("guess low number");
        }

  
        (i < maxAttempts) ? printf("Try again!\n") : printf("You've used all attempts! The lucky number was %d.\n", luckyNumber);
    }

    return 0;
}
