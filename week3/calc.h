#pragma once
//clac.c
#include <stdio.h>
#include <math.h>//M_PI는 여기 있어야하지만 없으면


#ifndef M_PI //아직 정의되지 않았으면
#define M_PI 3.1415926535
#endif


//함수 원형 선언하기
double sum(double value1, double value2);
double sub(double value1, double value2);
double mul(double value1, double value2);
double div(double value1, double value2);
int rem(int value1, int value2);

//추가 함수
double power(double base, double exponent);
double squareRoot(double num);
double areaOfcircle(double radius);
double circumferenceOfCircle(double radius);
