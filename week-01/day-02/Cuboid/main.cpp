#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000
    double a = 10;


    std::cout << "Surface Area: ";
    std::cout << a*a*6 << std::endl;

    std::cout << "Volume: ";
    std::cout << a*a*a << std::endl;
    return 0;
}