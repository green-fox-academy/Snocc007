#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).



int numberOfEars(int hunnyBunny) {

    if (hunnyBunny == 1) {

        return 1;
    } else {

        return 2 * (numberOfEars(hunnyBunny - 1));
    }

}

int main() {

    int numberOfBunnies;
    std::cout << "How many bunnies are there? ";
    std::cin >> numberOfBunnies;

    std::cout << "I can see " << numberOfEars(numberOfBunnies) << " floppy ears... " << std::endl;

    return 0;
}