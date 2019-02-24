#include<stdio.h>
#include <string>
#include <stdlib.h>
#define PI 3.14


double areaOfCircle(double radius){
    double area;
    area = radius * radius * PI;
    return area;
}

int main()
{
    // HELLO ME
    // Modify this program to greet you instead of the World!
    printf("Hello, Me!");

    // HELLO OTHERS
    // Greet 3 of your classmates with this program, in three separate lines
    // like:
    //
    // Hello, Gyuri!
    // Hello, Boro!
    // Hello, Adam!

    char Boro[] = "Boro";
    char Gyuri[] = "Gyuri";
    char Adam[] = "Adam";

    printf("Hello, %s!\n", Boro);
    printf("Hello, %s!\n", Gyuri);
    printf("Hello, %s!\n\n", Adam);

    // INTRODUCE YOURSELF
    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Use variables to store the informations!
    //
    //  Example output:
    //  John Doe
    //  31
    //  1.87

    char Me[] = "Snocc";
    int age = 38;
    float heigth = 1.81;

    printf("%s\n", Me);
    printf("%d\n", age);
    printf("%.2f\n\n", heigth);

    //TWO NUMBERS
    // Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22

    // Print the result of 13 substracted from 22

    // Print the result of 22 multiplied by 13

    // Print the result of 22 divided by 13 (as a decimal fraction)

    // Print the reminder of 22 divided by 13

    // Store the results in variables and use them when you display the result

    int x = 13;
    int y = 22;
    int a = x + y;
    int b = y - x;
    int c = x * y;
    int d = y / x;
    int e = y % x;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);

    // CUBOID
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // You should get these variables via console input
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    double cuboidA;
    double cuboidB;
    double cuboidC;


    printf("Please give me 1 side of the cuboid: \n");
    scanf("%lf", &cuboidA);
    printf("Please give me another side of the cuboid: \n");
    scanf("%lf", &cuboidB);
    printf("Please give me the 3rd side of the cuboid: \n");
    scanf("%lf", &cuboidC);
    double surface = 2 * (cuboidA * cuboidB + cuboidA * cuboidC + cuboidB * cuboidC);
    double volume = cuboidA * cuboidB * cuboidC;
    printf("Surface Area: %.2lf\n", surface);
    printf("Volume: %.2lf\n", volume);

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


    // define a variable called PI with the value of 3.14
    // create a function which takes the radius of a circle as a parameter
    // and return the area of that cirle
    // area = radius * radius * PI

    printf("%.3lf", areaOfCircle(5.5));

    return 0;
}