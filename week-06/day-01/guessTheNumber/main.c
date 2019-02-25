#include <stdio.h>

int main()
{
    // GUESS THE NUMBER

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stored number is lower
    // You found the number: 8

    int number = 8;
    int guess;

    printf("Guess the number: \n");
    scanf("%d", &guess);
    if (guess != number) {
        while (guess != number) {
            if (guess > number) {
                printf("The stored number is lower.\n");
                printf("Guess again: \n");
                scanf("%d", &guess);
            } else if (guess < number) {
                printf("The stored number is higher.\n");
                printf("Guess again: \n");
                scanf("%d", &guess);
            }
        }
    }
    printf("You found the number: %d.\n", number);

    return 0;
}