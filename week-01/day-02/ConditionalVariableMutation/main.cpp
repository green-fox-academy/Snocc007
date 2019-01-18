#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int a = 24;
    int out = 0;
    // if a is even increment out by one

    if (a % 2 == 0) {
        out += 1;

    }
    std::cout << out << std::endl;


    int b = 10;
    std::string out2 = "";
    if (10 <= b <= 20) {
        out2 = "Sweet!";
    }if (b < 10) {
        out2 = "Less!";
    }if (b > 20) {
        out2 = "More!";
    }
    // if b is between 10 and 20 set out2 to "Sweet!"
    // if less than 10 set out2 to "Less!",
    // if more than 20 set out2 to "More!"

    std::cout << out2 << std::endl;


    int c = 123;
    int credits = 100;
    bool isBonus = true;
    if ((credits >= 50) and !isBonus) {
        c -=2;
    }else if ((credits < 50) and !isBonus){
        c -=1;
    }
    // if credits are at least 50,
    // and isBonus is false decrement c by 2
    // if credits are smaller than 50,
    // and isBonus is false decrement c by 1
    // if isBonus is true c should remain the same

    std::cout << c << std::endl;


    int d = 8;
    int time = 120;
    std::string out3 = "";
    if (time > 200){
        out3 = "Time out";
    }else if ((d % 4 == 0) and (time <= 200)){
        out3 = "check";
    }else{
        out3 = "Run Forest Run!";
    }
    // if d is dividable by 4
    // and time is not more than 200
    // set out3 to "check"
    // if time is more than 200
    // set out3 to "Time out"
    // otherwise set out3 to "Run Forest Run!"

    std::cout << out3 << std::endl;

    return 0;
}