#include <iostream>

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.



std::string xToY(std::string textToChange) {


    if (textToChange.size() == 1) {

        if (textToChange[0] == 'x') {

            textToChange[0] = 'y';

        }
        std::string temp = textToChange.substr(0, 1);

        return temp;

    } else {

        if (textToChange[0] == 'x') {

            textToChange[0] = 'y';


        }
        std::string temp = textToChange.substr(0, 1);

        return (temp + xToY(textToChange.substr(1, textToChange.size()- 1)));
    }

}


int main() {

    std::string text = "Xenia has win over Conan at box by this syntax";


    std::cout << xToY(text);

    return 0;


}