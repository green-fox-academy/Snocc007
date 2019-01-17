#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int numbers[4]={4, 5, 6, 7};
    for (int i = 0; i <=3; i++) {
        numbers[i] = i+4;
        std::cout << numbers[i] << std::endl;

    }
    return 0;
}
    // std::cout << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << ", " << numbers[3] << std::endl;

    // - Create an array variable named `numbers`
    //   with the following content: `[4, 5, 6, 7]`
    // - Print all the elements of `numbers`

