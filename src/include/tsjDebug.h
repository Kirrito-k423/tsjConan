#ifndef __tsjDebug_H__
#define __tsjDebug_H__
#include "tsjCommonFunc.h"
#include <string>
// #include <execinfo.h>
// #include <stdio.h>
// #include <stdlib.h>


#define functracePrint(fmt,...) \
	colorPrint(KCYN,"	%s(%d)-<%s>: "##fmt, __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__)

class afterReturnPrint{
	private:
		std::string message;
	public:
		afterReturnPrint(std::string message):message(message) {}
		~afterReturnPrint(){errorPrint("afterReturnPrint: %s",message.c_str());}
};
// #include <windows.h>
// #include <dbghelp.h>
// #include <stdio.h>

// #if _MSC_VER
// #define snprintf _snprintf
// #endif

// #define STACK_INFO_LEN  1024

// void stacktracePrint(void);
// void stacktracePrint(char* szBriefInfo);


#endif /* __tsjTime_H__ */