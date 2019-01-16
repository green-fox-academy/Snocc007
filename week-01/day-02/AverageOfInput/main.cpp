#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4
    int a;
    int b;
    int c;
    int d;
    int e;
    std::cout << "Give me a number: ";
    std::cin >> a;
    std::cout << "Give me another number: ";
    std::cin >> b;
    std::cout << "Give me another number: ";
    std::cin >> c;
    std::cout << "Give me another number: ";
    std::cin >> d;
    std::cout << "Give me a final number: ";
    std::cin >> e;
    std::cout << "Sum: ";
    float f = a+b+c+d+e;
    std::cout << f;
    float g;
    g = f/5;
    std::cout << ", Average: ";
    std::cout << g << std::endl;
    return 0;
}