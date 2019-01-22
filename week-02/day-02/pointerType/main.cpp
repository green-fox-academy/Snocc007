#include <iostream>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *p_a;
    p_a = &a;
    double *p_b;
    p_b = &b;
    std::string *p_name;
    p_name = &name;

    std::cout << p_a << std::endl << p_b << std::endl << p_name << std::endl;

    return 0;
}