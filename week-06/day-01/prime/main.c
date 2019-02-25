#include <stdio.h>
#include <stdlib.h>

int ifPrimeNumber(int number);

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)

    printf("%d", ifPrimeNumber(2));

    return 0;
}

int ifPrimeNumber(int number)
{

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;

        } else {
            return 1;
        }
    }
}