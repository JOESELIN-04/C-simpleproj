#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess;
    int guess;
    int numberOfTries=0;
    int maxTries = 5;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 10
    numberToGuess = rand() % 15 + 1;

    printf("Welcome to the Guess the Number game!\n");
    printf("I'm thinking of a number between 1 and 15.\n");
    printf("You have %d attempts to guess the correct number.\n", maxTries);

    while (numberOfTries < maxTries) {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        // Check if the guess is correct
        if (guess == numberToGuess) {
            printf(" Congratulations! You guessed the correct number in %d attempts.\n", numberOfTries + 1);
            return 0;
        }

        // Check if the guess is too high or too low
        if (guess < numberToGuess) {
            printf("Too low! Try a higher number.\n");
        } else {
            printf("Too high! Try a lower number.\n");
        }

        // Increment the number of tries
        numberOfTries++;
    }

    // If the player runs out of tries, display the correct answer
    printf("\nSorry, you didn't guess the correct number. The correct answer was %d.\n", numberToGuess);

    return 0;
}
