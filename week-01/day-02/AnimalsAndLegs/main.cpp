#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have
    int chicken;
    int pig;
    std::cout << "How many chickens do you have?" << std::endl;2
    std::cin >> chicken;
    std::cout << "How many pigs do you have?" << std::endl;
    std::cin >> pig;
    std::cout << "The animals have ";
    std::cout << chicken*2 + pig*4;
    std::cout << " legs in grand total." << std::endl;

    return 0;
}