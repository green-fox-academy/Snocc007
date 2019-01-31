#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int add(int num);

int main() {
    int n;
    std::cout << "Please give me a number: " << std::endl;
    std::cin >> n;

    add(n);

    std::cout << add(n) << std::endl;
    std::cout << "Gecire nem erdekelsz...na ciaoooooo!!!" << std::endl;
    return 0;
}

int add(int num) {



    if (num ==0 ){



        return num;

    } else {


        return add(num - 1) + num;



    }
}