#include <stdio.h>

int main()
{
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

    return 0;
}