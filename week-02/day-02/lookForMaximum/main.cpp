#include <iostream>

int main() {

    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it


    int givenNumber;
    int array[givenNumber];
    int *big;


    std::cout << "Please give me a number: " << std::endl;
    std::cin >> givenNumber;

    std::cout << "Now give me " << givenNumber << " number(s): " << std::endl;

    for (int i = 0; i < givenNumber; i++){



        std::cin >> array[i];

    }

    big = array;


    for (int i = 0; i < givenNumber; i++){

        if (*big < array[i]) {

            big = array + i;
        }
    }
    std::cout << "The biggest given number is: " << *big << std::endl;

    std::cout << "This number is on the memory address: " << big;


    return 0;
}