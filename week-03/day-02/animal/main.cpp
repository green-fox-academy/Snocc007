#include <iostream>
#include "Animal.h"


int main() {

    Animal PussyCat = Animal();
    Animal DogTracy = Animal();

    PussyCat.eat();
    PussyCat.drink();
    DogTracy.play();
//

    std::cout << "PussyCat's state is now: " << PussyCat.getState() << std::endl;
    std::cout << "DogTracy's state is now: " << DogTracy.getState() << std::endl;


    return 0;
}