#include <iostream>
#include <string>

int sum (int szam) {
    int a = 0;
    for (int x = 0; x<=szam; x++) {
    a = x+a;
}
    return a;
}

int main(int argc, char* args[]) {
    std::cout << "Give me a number: " << std::endl;
    int b;
    std::cin >> b;

    sum(b);

    std::cout << "The sum of these numbers is: "
    << sum(b) << std::endl;

    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer

    return 0;
}