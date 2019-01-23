#include <iostream>
#include <fstream>

int main() {

    double a = 10;
    double b;

    std::cout << "Please give me a number: " << std::endl;
    std::cin >> b;

    try {

    if (b == 0) {

        throw 'E';

    } std::cout << a / b << std::endl;

    }catch (char &error) {

        std::cout << "Divide by 0 is not possible!" <<  std::endl;
    }

    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    return 0;
}