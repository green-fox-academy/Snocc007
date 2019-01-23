#include <iostream>
#include <fstream>
#include <string>


int main () {


    std::string line;

    std::ifstream myFile;
    myFile.open("my-file.txt");


    while(getline(myFile, line)){

        std::cout << line << std::endl;

    }





    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory

    return 0;
}