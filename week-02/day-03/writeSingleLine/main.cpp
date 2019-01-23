#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ofstream myFile("my-file.txt");
    myFile << "Istvan Schneider";

    // Open a file called "my-file.txt"
    // Write your name in it as a single line

    return 0;
}