#include <iostream>
#include <string>


std::string appendingA(std::string anim){
    anim = anim + "a";
    return anim;
}
int main(int argc, char* args[]) {
    std::string animals[3] = {"koal", "pand", "zebr"};
    for (int i = 0; i <=2; i++) {
    animals[i] = appendingA(animals[i]);
    std::cout << animals[i] << ", ";
    }
    // - Create an array vriable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end

    return 0;
}