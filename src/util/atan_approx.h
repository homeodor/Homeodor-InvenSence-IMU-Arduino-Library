#ifndef ATAN_APPROX_H_
#define ATAN_APPROX_H_

#include <Arduino.h>

__attribute__ ((long_call, section (".ramfunc"))) float atan2_approximation1(float y, float x);

#endif