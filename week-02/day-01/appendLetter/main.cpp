#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> appendA (std::vector<std::string> &animaa) {

    for (int i = 0; i < animaa.size(); i++) {
        animaa[i] += "a";

    }
    return animaa;
}

    int main(int argc, char *args[]){


        std::vector<std::string> animals = {"ganj", "sut", "mann", "fant", "durv"};



        // Create a function called "appendA()" that adds "a" to every string in the "animals" list.
        // The parameter should be a vector.

        std::vector<std::string> newAnimals = appendA(animals);

        for (int i = 0; i < newAnimals.size(); ++i) {
            std::cout << newAnimals[i] << " ";
        }

        return 0;
    }


