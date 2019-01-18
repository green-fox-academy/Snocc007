#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two numbers and prints the bigger one

    double a;
    double b;
    std::cout << "Give me a number: " << std::endl;
    std::cin  >> a;
    std::cout << "Give me another number: " << std::endl;
    std::cin  >> b;

    if (a==b) {
        std::cout << "The two numbers are equal." << std::endl;
    }else if (a > b){
        std::cout << a << " is the bigger number." << std::endl;
    }else if (b > a){
        std::cout << b << " is the bigger number." << std::endl;
    }

    return 0;
}