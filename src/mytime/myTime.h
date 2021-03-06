#pragma once

#include "mbed.h"
#include "DsRTC.h"

class MyTime
{
    private:
        int hours, minutes, seconds, milliseconds;

    public:
    MyTime(DsRTC* dsRtc);
    MyTime(int hours, int minutes, int seconds, int milliseconds);
    ~MyTime();

    int getHours();
    int getMinutes();
    int getSeconds();
    int getMilliseconds();
};
