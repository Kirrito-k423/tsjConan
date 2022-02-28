#include <iostream>
#include "tsjCommonFunc.h"
#include "tsjTime.h"
#include "tsjDebug.h"

// void func2()
// {
//     bool isError = true;
//     if (isError)
//     {
//         stacktracePrint("error in func2\n");
//     }
//     else
//     {
//         printf("this is func2\n");
//     }
// }

// void func1()
// {
//     int sum = 0;
//     for (int i = 0; i < 100; ++i)
//         sum += i;

//     func2();
// }
//https://blog.csdn.net/albertsh/article/details/100540338

int main (void) {
    tsjTimeClass globalTime;
    // atexit(stacktracePrint);
    afterReturnPrint guard(__FUNCTION__);

    globalTime.updateTime();
    #ifdef NDEBUG
    std::cout << "Hello World Release!" <<std::endl;
    #else
    std::cout << "Hello World Debug!" <<std::endl;
    #endif
    globalTime.updateTime();
    splitPrint("This is shaojie's Conan experience!!!");
    testColor();
    errorPrint("errorPrint");
    passPrint("passPrint");

    colorPrint(KMAG,"colorPrint");
    functracePrint("functracePrint\n");
    // func1();
    globalTime.updateTime();
    // passPrint();  “passPrint”: 函数不接受 0 个参数
}

