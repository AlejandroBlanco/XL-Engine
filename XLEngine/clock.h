#pragma once
#include "types.h"

class Clock
{
public:
	static bool  init();
	static void  destroy();
	static void  startTimer(s32 timerID=0);
	static float getDeltaTime(f32 fMax, s32 timerID=0);
	static f64	 getDeltaTime_f64(int timerID=0);
	static u64   getDeltaTime_uS(s32 timeID=0);
	static u64   getTime_uS();
	static f64   getTime_uS_flt();

private:
	static f32 s_deltaTime;
	static f32 s_realDeltaTime;
	static s32 s_deltaTicks;
};
