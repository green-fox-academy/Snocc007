#include <iostream>

int main(int argc, char* args[]) {

    int girls;
    int boys;

    std::cout << "How many girls are coming to the party? ";
    std::cin >> girls;
    std::cout << "How many boys are coming to the party? ";
    std::cin >> boys;


    if (girls == 0) {
        std::cout << "Sausage party.";
    }else if ((girls==boys) and ((girls + boys) >= 20)) {
            std::cout << "The party is excellent!";
    }else if ((girls != boys) and ((girls + boys) >= 20)){
        std::cout << "Quite cool party!";
    }else if ((girls+boys) < 20){
        std::cout << "Average party...";
    }

    // Write a program that asks for two numbers
    // The first number represents the number of girls that comes to a party, the
    // second the boys
    // It should print: The party is excellent!
    // If the the number of girls and boys are equal and 20 or more people are coming to the party
    //
    // It should print: Quite cool party!
    // If there are 20 or more people coming to the party but the girl - boy ratio is not 1-1
    //
    // It should print: Average party...
    // If there are less people coming than 20
    //
    // It should print: Sausage party
    // If no girls are coming, regardless the count of the people

    return 0;
}