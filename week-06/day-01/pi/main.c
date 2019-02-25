#include <stdio.h>

#define PI 3.14

#include "pi.h"

int main()
{
    // PI
    // define a variable called PI with the value of 3.14
    // create a function which takes the radius of a circle as a parameter
    // and return the area of that cirle
    // area = radius * radius * PI


    // Continue working on the pi.c project

    // Organise the function from the previous excercise to separate .c and .h files
    // Create another function which calculates the circumference of a circle
    // the radius of the circle should be passed as a parameter
    // the function should return the calculated circumference
    // circumference = 2 * radius * PI
    // this function should be in the same .c and .h files as the one which calculates the area

    printf("The area of the circle is: %.3lf\n", areaOfCircle(5.5));
    printf("The circumreference of the circle is: %.3lf\n", circumreference(5.5));
    return 0;
}

double areaOfCircle(double radius)
{
    double area;
    area = radius * radius * PI;
    return area;
}

double circumreference(double radius)
{
    double circumreference;
    circumreference = 2 * radius * PI;
    return  circumreference;
}