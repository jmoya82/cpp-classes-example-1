
#include <iostream>
#include "MultiplicadorDivisor.hpp"

//constructor
MultiplicadorDivisor::MultiplicadorDivisor(int a){
    mode = a;
}

//out-of-line methods
int MultiplicadorDivisor::operation(int a, int b){
    if (this->mode == 0) {
        return a * b;
    } else if (this->mode == 1) {
        return a / b;
    } else {
        return -1;
    }
}
