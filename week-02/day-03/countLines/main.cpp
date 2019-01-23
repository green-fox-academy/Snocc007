#include <iostream>
#include <fstream>
#include <string>


int main () {
    std::fstream myFile;
    myFile.open("my-file.txt");
    try {
        if (myFile.is_open()){

            std::string count;
            int lines = 0;

            while (getline(myFile, count)){

                lines++;
            }

            std::cout << lines << std::endl;
            myFile.close();

        } else {
            throw 0;
        }

    }  catch (...){

        std::cout << "No File";
    }

    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    return 0;
}