#include <iostream>

int main(int argc, char* args[]) {

    int a;
    int b;
    std::cout << "Please give me a number: " << std::endl;
    std::cin >> a;
    std::cout << "Please give me another number: " << std::endl;
    std::cin >> b;
    if (a > b){
        std::cout << "The second number should be bigger" << std::endl;
    }else{
        for (int i=0; i = (b-a); i++){
            std::cout << a++ << std::endl;
        }
    }

    // Create a program that asks for two numbers
    // If the second number is not bigger than the first one it should print:
    // "The second number should be bigger"
    //
    // If it is bigger it should count from the first number to the second by one
    //
    // example:
    //
    // first number: 3, second number: 6, should print:
    //
    // 3
    // 4
    // 5

    return 0;
}