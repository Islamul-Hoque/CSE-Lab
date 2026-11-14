#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess = 0;

    srand(time(NULL));
    random = rand() % 20 + 1;

    printf("I'm thinking of a number between 1 and 20. Guess it!\n");

    while (guess != random) {
        printf("Your guess: ");

        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        if (guess < random) {
            printf("Too low! Try again.\n");
        } else if (guess > random) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed it: %d\n", random);
        }
    }

    return 0;
}