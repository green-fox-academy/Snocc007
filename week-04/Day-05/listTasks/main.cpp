#include <iostream>
#include <fstream>

int main(int argc, char *args[])
{

    std::string commandList = "Command Line Todo application\n"
                              "=============================\n"
                              "\n"
                              "Command line arguments:\n"
                              "-l   Lists all the tasks\n"
                              "-a   Adds a new task\n"
                              "-r   Removes a task\n"
                              "-c   Completes a task";

    if (argc <= 1)
        std::cout << commandList << std::endl;

    std::fstream myFile;
    std::string argList = "-l";
    std::string line;
    myFile.open("tasks.txt");

    if (argc <= 1 and args[1] == argList) {
        int numberOfLines = 0;
        while (getline(myFile, line)) {
            numberOfLines++;
            std::cout << numberOfLines << " - " << line << std::endl;

        }


    }

    return 0;
}