#include <iostream>
#include "tsjCommonFunc.h"
#include "tsjTime.h"

int main (void) {
    tsjTimeClass globalTime;
    globalTime.updateTime();
    #ifdef NDEBUG
    std::cout << "Hello World Release!" <<std::endl;
    #else
    std::cout << "Hello World Debug!" <<std::endl;
    #endif
    globalTime.updateTime();
    splitPrint("This is shaojie's Conan experience!!!");
    errorPrint("errorPrint");
    passPrint("passPrint");
    globalTime.updateTime();
    // passPrint();  “passPrint”: 函数不接受 0 个参数
}
