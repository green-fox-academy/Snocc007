#include <iostream>

int main(int argc, char* args[]) {

    int a;
    std::cout << "Please give me a number: " << std::endl;
    std::cin >> a;
    std::string star ="";

    for (int i = 0; i < a; i++){
        star +="*";
        std::cout << star << std::endl;
    }

    // Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was

    return 0;
}