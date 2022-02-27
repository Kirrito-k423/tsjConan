
#include <iostream>
#include <string.h>
#include <stdarg.h>
#include "./include/tsjCommonFunc.h"
#include "./include/tsjTime.h"

tsjTimeClass::tsjTimeClass(int count, int beginTime, int lastTime)
	:count(count), beginTime(beginTime), lastTime(lastTime)
{
	splitPrint("time class create");
}

// reference: https://www.delftstack.com/zh/howto/cpp/how-to-get-time-in-milliseconds-cpp/
void tsjTimeClass::updateTime(){
	if(beginTime==-1 && lastTime==-1){
		splitPrint("start time check");
		auto millisec_since_epoch = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
		beginTime = millisec_since_epoch;
		lastTime = millisec_since_epoch;
		count = 0;
	}else{
		auto millisec_since_epoch = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
		yellowPrint("passTime %d from Last:  %6dms, %6fs",count,millisec_since_epoch-lastTime,static_cast< float >(millisec_since_epoch-lastTime)/1000);
		yellowPrint("passTime %d from start: %6dms, %6fs",count,millisec_since_epoch-beginTime,static_cast< float >(millisec_since_epoch-beginTime)/1000);
		lastTime =millisec_since_epoch;
		count+=1;
	}
}

void tsjTimeClass::updateTime(const char* format, ...){
	if(beginTime==-1 && lastTime==-1){
		splitPrint("start time check");
		auto millisec_since_epoch = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
		beginTime = millisec_since_epoch;
		lastTime = millisec_since_epoch;
		count = 0;
	}else{
		va_list argptr;
		va_start(argptr, format);
		vprintf(format, argptr);
		va_end(argptr);
		auto millisec_since_epoch = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
		yellowPrint("passTime %d from Last:  %6dms, %6fs",count,millisec_since_epoch-lastTime,static_cast< float >(millisec_since_epoch-lastTime)/1000);
		yellowPrint("passTime %d from start: %6dms, %6fs",count,millisec_since_epoch-beginTime,static_cast< float >(millisec_since_epoch-beginTime)/1000);
		lastTime =millisec_since_epoch;
		count+=1;
	}
}