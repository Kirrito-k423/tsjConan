/*
 * @Descripttion: 
 * @version: 
 * @Author: Shaojie Tan
 * @Date: 2022-02-18 23:45:02
 * @LastEditors: Shaojie Tan
 * @LastEditTime: 2022-02-19 19:54:37
 */
#include <iostream>
#include <string.h>
#include <stdarg.h> 
#define MAX_DIGITS 100


#include "./include/tsjCommonFunc.h"

int errorPrint(const char* format, ...){
    if(strlen(format)> MAX_DIGITS-30){
        errorPrint("errorPrint input > MAX_DIGITS");
        return 1;
    }
    char tmp_char[MAX_DIGITS + sizeof(char)];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(tmp_char, format, argptr);
    va_end(argptr);
    #ifndef NDEBUG
    std::cout << FRED(<<tmp_char<<) << std::endl;
    #endif
    return 0;
}


int passPrint(const char* format, ...){
    if(strlen(format)> MAX_DIGITS-30){
        errorPrint("passPrint input > MAX_DIGITS");
        return 1;
    }
    char tmp_char[MAX_DIGITS + sizeof(char)];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(tmp_char, format, argptr);
    va_end(argptr);
    #ifndef NDEBUG
    std::cout << FGRN(<<tmp_char<<) << std::endl;
    #endif
    return 0;
}

int yellowPrint(const char* format, ...){
    if(strlen(format)> MAX_DIGITS-30){
        errorPrint("yellowPrint input > MAX_DIGITS");
        return 1;
    }
    char tmp_char[MAX_DIGITS + sizeof(char)];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(tmp_char, format, argptr);
    va_end(argptr);
    #ifndef NDEBUG
    std::cout << FYEL(<<tmp_char<<) << std::endl;
    #endif
    return 0;
}

int splitPrint(const char* format, ...){
    if(strlen(format)> MAX_DIGITS-30){
        errorPrint("splitPrint input > MAX_DIGITS");
        return 1;
    }
    char tmp_char[MAX_DIGITS + sizeof(char)];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(tmp_char, format, argptr);
    va_end(argptr);
    const char* line=(const char*)"------------------";
    #ifndef NDEBUG
    std::cout <<std::endl;
    std::cout <<line<< tmp_char <<line<< std::endl;
    std::cout <<std::endl;
    #endif
    return 0;
}

int colorPrint(const char* color, const char* format, ...){
    if(strlen(format)> MAX_DIGITS-30){
        errorPrint("yellowPrint input > MAX_DIGITS");
        return 1;
    }
    char tmp_char[MAX_DIGITS + sizeof(char)];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(tmp_char, format, argptr);
    va_end(argptr);
    #ifndef NDEBUG
    std::cout << color <<tmp_char<< RST << std::endl; //K*** no F***
    #endif
    return 0;
}


void testColor(){
    char tmp_char[30]="color like this!";
    std::cout << "FRED " <<FRED(<<tmp_char<<) << std::endl;
    std::cout << "FGRN " <<FGRN(<<tmp_char<<) << std::endl;
    std::cout << "FYEL " <<FYEL(<<tmp_char<<) << std::endl;
    std::cout << "FBLU " <<FBLU(<<tmp_char<<) << std::endl;
    std::cout << "FCYN " <<FCYN(<<tmp_char<<) << std::endl;
    std::cout << "FMAG " <<FMAG(<<tmp_char<<) << std::endl;
    std::cout << "FWHT " <<FWHT(<<tmp_char<<) << std::endl;
    std::cout << "BOLD " <<BOLD(<<tmp_char<<) << std::endl;
    std::cout << "UNDL " <<UNDL(<<tmp_char<<) << std::endl;
}
