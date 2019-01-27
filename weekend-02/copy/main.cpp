#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <istream>

bool copyContent(std::string fileNAme, std::string newFileName);

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

int main() {

    std::string fileName = "myFile.txt";
    std::string newFileName = "myNewFile.txt";

    if (copyContent(fileName, newFileName)) {

        std::cout << "The copy was successful";

    } else {
        std::cout << "The copy was unsuccessful";
    }

    return 0;
}

bool copyContent(std::string fileNAme, std::string newFileName) {

    bool status = false;

    std::ofstream myNewFile;
    std::ifstream myFile;

    myFile.open("myFile.txt");
    myNewFile.open("myNewFile.txt");

    std::string contentOfNewFile;
    std::string content;

    std::vector<std::string> contentOfmyFile;
    std::vector<std::string> contentOfmyNewFile;

    while (std::getline(myFile, content)) {

        myNewFile << content << std::endl;
        contentOfmyFile.push_back(content);

    }

    myNewFile.close();


    std::ifstream myNewFileToCompare;
    myNewFileToCompare.open("myNewFile.txt");


    while (std::getline(myNewFileToCompare, contentOfNewFile)) {

        contentOfmyNewFile.push_back(contentOfNewFile);
    }


    if (contentOfmyFile == contentOfmyNewFile) {

        status = true;

    }

    myNewFileToCompare.close();
    myFile.close();

    return status;

}