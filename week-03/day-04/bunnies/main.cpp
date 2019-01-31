#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).



int numberOfEars(int hunnyBunny, int ears) {



    if (hunnyBunny == 1) {


        return ears;

    } else {

        return ears + (numberOfEars(hunnyBunny - 1 , ears));
    }

}

int main() {

    int numberOfBunnies;
    int floppyEars = 2;
    std::cout << "How many bunnies are there? ";
    std::cin >> numberOfBunnies;

    std::cout << "I can see " << numberOfEars(numberOfBunnies, floppyEars) << " floppy ears... " << std::endl;

    return 0;
}