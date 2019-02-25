#include <stdio.h>

#define PI 3.14

double areaOfCircle(double radius)
{
    double area;
    area = radius * radius * PI;
    return area;
}

int main()
{
    // PI
    // define a variable called PI with the value of 3.14
    // create a function which takes the radius of a circle as a parameter
    // and return the area of that cirle
    // area = radius * radius * PI

    printf("%.3lf", areaOfCircle(5.5));

    return 0;
}