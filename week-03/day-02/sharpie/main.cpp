#include <iostream>
#include "Sharpie.h"


int main() {

    Sharpie SharpieNo1 = Sharpie("green", 1.25);
    Sharpie SharpieNo2 = Sharpie("yellow", 1.5);

    SharpieNo1.use();
    SharpieNo2.use();
    SharpieNo1.use();


    std::cout << SharpieNo1.sharpieState() << std::endl;
    std::cout << SharpieNo2.sharpieState() << std::endl;


    return 0;
}


