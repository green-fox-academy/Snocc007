#include <iostream>

void swap(int& n1, int& n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main(int argc, char* args[]) {

    // Swap the values of the variables
   int a = 123;
   int b = 526;
  swap(a, b);
  std::cout << a << std::endl;
  std::cout << b << std::endl;
    
   // int c;

     //   c = a;
       // a = b;
       // b = c;



    return 0;
}
