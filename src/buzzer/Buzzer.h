#pragma once

#include "mbed.h"

class Buzzer{
    private:
        PwmOut pwm;

    public:
        Buzzer();
        void playFreq(float frequency, float duration, float volume);
        void completeSound();
};
