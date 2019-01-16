
#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it
    int km;
    float miles;
    std::cout << "How many km-s did you bike today?" << std::endl;
    std::cin >> km;
    miles = km*1.6;
    std::cout << "This means you've biked ";
    std::cout << miles;
    std::cout << " miles." << std::endl;
    return 0;
}