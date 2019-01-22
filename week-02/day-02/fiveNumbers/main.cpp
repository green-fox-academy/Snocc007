#include <iostream>

int main() {
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again


    int numbers[5];
    int *p_numbers[5];

    std::cout << "Give me a number: ";

    for (int i = 0; i < 1; i++) {

        std::cin >> numbers[0];
        for (i = 1; i < 5; i++) {
            std::cout << "Give me one more number: ";
            std::cin >> numbers[i];
        }
    }

    for (int i = 0; i < 5; i++){

        p_numbers[i] = &numbers[i];

    }


    std::cout << std::endl;
    std::cout << "The values of these number are: ";

    for (int i = 0; i < 5; i++) {

        std::cout << *p_numbers[i] << " ";
    }   std::cout << std::endl;
    return 0;

}