#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

int sumOfDigits(int num) {

    if (num == 0) {

        return 0;
    } else {

        return num % 10 + (sumOfDigits(num / 10));
    }

}


int main() {

    int number;
    std::cout << "Give me a positive integer number: " << std::endl;
    std::cin >> number;

    std::cout << "The sum of the digits of this number is: " << sumOfDigits(number) << std::endl;

    return 0;
}

