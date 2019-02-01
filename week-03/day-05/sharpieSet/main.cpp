#include <iostream>
#include "Sharpie.h"
#include "SharpieSet.h"

//    SharpieSet WeekDaySharpie;
//    SharpieSet WeedEndSharpie;

#include <iostream>
#include "Sharpie.h"


int main() {

    Sharpie SharpieGreen = Sharpie("Green", 1.25, 86);
    Sharpie SharpieYellow = Sharpie("Yellow", 1.5, 80);
    Sharpie SharpieBlue = Sharpie("Blue", 1.0, 33);
    Sharpie SharpieRed = Sharpie("Red", 1.24, 22);

    int usage;
    std::cout << "Please give me how many times you want to use the sharpies: " << std::endl;
    std::cin >> usage;
    for (int i = 0; i < usage; i++) {

        SharpieGreen.use();
        SharpieYellow.use();
        SharpieBlue.use();
        SharpieRed.use();

    }

    std::vector<Sharpie> mySetofSharpies;                       // creating and filling up vector with object sharpies

    mySetofSharpies.push_back(SharpieYellow);
    mySetofSharpies.push_back(SharpieGreen);
    mySetofSharpies.push_back(SharpieBlue);
    mySetofSharpies.push_back(SharpieRed);

    SharpieSet mySet(mySetofSharpies);

    std::cout << SharpieYellow.sharpieState() << std::endl;     // checking state of sharpies
    std::cout << SharpieGreen.sharpieState() << std::endl;
    std::cout << SharpieBlue.sharpieState() << std::endl;
    std::cout << SharpieRed.sharpieState() << std::endl;

    mySet.removeTrash();                                        // removing empty sharpies

    std::cout << mySet.countUsable();


    return 0;
}

