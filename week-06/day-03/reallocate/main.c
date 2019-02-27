#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main()
{
    int X;
    int Y = 0;

    printf("Yo! Gimme a number b*tch: \n");
    scanf("%d", &X);

    int *numbers = NULL;
    numbers = (int *) calloc(X, sizeof(int));


    printf("Now U mother f*cker, gimme this many numbers! \n"
           "I hope it is not many coz I don't have much time for this shit...\n");
    for (int i = 0; i < X; i++) {

        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < X; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    for (int i = 0; i < X; i++) {
        Y = Y + numbers[i];
    }

    realloc(numbers, Y);

    for (int i = 0; i <= Y; i++) {
        numbers[i] = i;
    }

    for (int i = 0; i < Y; i++) {
        printf("%d ", numbers[i+1]);
    }
    printf("\n");
    return 0;
}