#include <iostream>

int main(int argc, char* args[]) {

    int n = 8;
    int a;


    while (a != n) {
        std::cout << "Guess my number!" << std::endl;
        std::cin >> a;
        if ((a < n) and (n - a <= 2)) {
            std::cout << "You are getting closer but The number is still too low..." << std::endl;
        }else if ((a > n) and (a - n <= 2)){
            std::cout << "You are getting closer but The number is still too high..." << std::endl;
        }else  if (a < n) {
            std::cout << "The number is too low..." << std::endl;
        }else if (a > n) {
            std::cout << "The number is too high..." << std::endl;
        }
    } if (a == n);
    std::cout << "Congratulations!!! You've found the number! It's " << a << "." << std::endl;


    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8

    return 0;
}