
#include <iostream>
#include "MultiplicadorDivisor.hpp"

int main(const int argc, const char *argv[]){
    MultiplicadorDivisor mult(0);
    MultiplicadorDivisor div(1);
    
    int a = 3;
    int b = 3;
    int c = 100;
    int d = 4;
    
    std::cout << "Hello, I am a multplicator!" << std::endl;
    std::cout << a << " x " << b << " = " << mult.operation(a, b) << std::endl;
    std::cout << "Hello, I am a reversed multiplicator!" << std::endl;
    std::cout << c << " / " << d << " = " << div.operation(c, d) << std::endl;
    return 0;
}
