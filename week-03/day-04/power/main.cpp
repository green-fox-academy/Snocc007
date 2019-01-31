#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

int powerN(int base, int num) {


    if (num <= 1) {

        return base;
    } else {

        return base * powerN(base, (num - 1));
    }

}

int main() {

    int Base;
    int Num;

    std::cout << "Give me a positive integer number which is least 1: ";
    std::cin >> Base;
    std::cout << "Give me another positive integer number which is at least 1: ";
    std::cin >> Num;

    std::cout << "The 1st number to 2nd number power is: " << powerN(Base, Num) << std::endl;

    return 0;
}