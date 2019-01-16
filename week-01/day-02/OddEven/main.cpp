#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.
    int a;
    std::cout << "Give me a number: ";
    std::cin >> a;
    if (a%2==0) {
        std::cout << "The number is even.";
    }else{
        std::cout << "The number is odd.";
    };

    return 0;
}