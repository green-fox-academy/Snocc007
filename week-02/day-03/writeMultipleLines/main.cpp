#include <iostream>
#include <fstream>
#include <string>
#include <vector>


void writeFile (std::string path, std::string word, int number) {

    std::ofstream file("myfile.txt");

    int i = 0;

    while (i < number) {

        file << word << std::endl;

        i++;

    }
}




// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

int main() {

    int number = 0;
    std::string word;

    std::cout << "Plese give me a word: ";
    std::cin >> word;

    std::cout << "Plese give how many times you want me to write it in the file: ";
    std::cin >> number;

    writeFile("myfile.txt", word, number);

    return 0;
}