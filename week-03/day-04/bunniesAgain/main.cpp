#include <iostream>

// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).

int numberOfEars(int hunnyBunny, int ears) {

    if (hunnyBunny == 0) {

        return ears;

    } else if (hunnyBunny % 2 == 0) {

        return numberOfEars(hunnyBunny - 1, ears + 2);
    }else if  (hunnyBunny % 2 == 1){

        return numberOfEars(hunnyBunny - 1, ears + 3);
    }

}

int main() {

    int numberOfBunnies;
    int Ears;
    std::cout << "How many bunnies are there? ";
    std::cin >> numberOfBunnies;

    std::cout << "I can see " << numberOfEars(numberOfBunnies, Ears) << " floppy ears... " << std::endl;

    return 0;
}