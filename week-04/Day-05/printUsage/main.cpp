#include <iostream>


int main(int argc, char* args[])
{
    std::string text = "Command Line Todo application\n"
                       "=============================\n"
                       "\n"
                       "Command line arguments:\n"
                       "-l   Lists all the tasks\n"
                       "-a   Adds a new task\n"
                       "-r   Removes a task\n"
                       "-c   Completes a task";

    std::cout << text << std::endl;
    return 0;
}