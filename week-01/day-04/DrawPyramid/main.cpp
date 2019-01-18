#include <iostream>

int main(int argc, char *args[]) {

    int a;
    std::cout << "Please give me a number: " << std::endl;
    std::cin >> a;
    std::string star = "*";
    std::string space = " ";
    int s = 1;



        for (int j = 0; j < a; j++){

            for (int k = s; k < a; k++){

                std::cout << space;
            }
            std::cout << star << std::endl;
            star = star + "**";
            s++;
        }







    // Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was

    return 0;
}