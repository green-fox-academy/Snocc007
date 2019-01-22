#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array
    int numbers[5];
    std::cout << "Give me a number: " << std::endl;

        for (int i = 0; i < 1; i++){

            std::cin >> numbers[0];
            for (i = 1; i < 5; i++){
                std::cout << "Give one more number: ";
                std::cin >> numbers[i];
            }
        }

        std::cout << std::endl;
        std::cout <<"The memory addresses of these number are: \n" << std::endl;

    for (int i = 0; i < 5; i++) {

        std::cout << &numbers[i] << std::endl;
    }
    return 0;
}