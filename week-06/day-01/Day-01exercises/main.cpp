#include<stdio.h>
#include <string>

int main()
{
    // Modify this program to greet you instead of the World!
    printf("Hello, Me!");


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

    return 0;
}