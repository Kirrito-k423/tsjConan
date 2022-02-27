#ifndef __tsjTime_H__
#define __tsjTime_H__
#include "tsjCommonFunc.h"
#include <chrono>
#include <ctime>
#include <cstdint>
using std::chrono::duration_cast;
using std::chrono::milliseconds;
using std::chrono::seconds;
using std::chrono::system_clock;
class tsjTimeClass{
	private:
		std::int64_t count = 0; //c++11 works now!
    	std::int64_t beginTime = -1;
    	std::int64_t lastTime = -1;
	public:
		tsjTimeClass(){splitPrint("time class create default");} //初始化函数
		tsjTimeClass(int count, int beginTime, int lastTime);
		void updateTime();
		void updateTime(const char* format, ...);
};


#endif /* __tsjTime_H__ */