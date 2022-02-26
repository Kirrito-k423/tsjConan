#include <iostream>
#include "./include/tsjCommonFunc.h"

int main (void) {
    #ifdef NDEBUG
    std::cout << "Hello World Release!" <<std::endl;
    #else
    std::cout << "Hello World Debug!" <<std::endl;
    #endif
    splitPrint("This is shaojie's Conan experience!!!");
}
