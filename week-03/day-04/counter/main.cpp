#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.

int countdown(int num);


int main() {

    int n;
    std::cout << "Please give me a number: " << std::endl;
    std::cin >> n;

    countdown(n);

    return 0;
}

int countdown(int num) {



    if (num <=0 ){

        std::cout << "Gecire nem erdekelsz...na ciaoooooo!!!" << std::endl;

    } else {

        std::cout << num << std::endl;
        countdown(num - 1);

    }
    return 0;
}