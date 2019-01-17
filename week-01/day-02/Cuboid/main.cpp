#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    double a;
    double b;
    double c;

    std::cout << "Give the lenght of one side: ";

    std::cin >> a;

    std::cout << "Give the lenght of another side: ";

    std::cin >> b;

    std::cout << "Give the lenght of the third side ";

    std::cin >> c;

    double surface = 2*(a*b+b*c+a*c);
    double volume = a*b*c;

    std::cout << "The surface of the cuboid is: " << surface << "." << std::endl;
    std::cout << "The volume of the cuboid is: " << volume << "." << std::endl;

    return 0;
}