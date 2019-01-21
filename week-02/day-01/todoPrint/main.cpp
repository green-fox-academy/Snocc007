#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string todoText = " - Buy milk\n";
    std::string down = " - Download games\n";
    std::string diablo = " - Diablo";

    todoText.insert(0,"My todo:\n").append(" - Download games\n").append("     - Diablo");
 //   todoText.insert(todoText.end(), down);



    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indentation

    // Expected outpt:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo

    std::cout << todoText << std::endl;

    return 0;
}