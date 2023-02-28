#pragma once
#include <iostream>
#include "Figure.h"
#ifndef UNTITLED15_TRIANGLE_H
#define UNTITLED15_TRIANGLE_H
using namespace std;
class Triangle: public Figure{
private:
    int a = 0;
    int b = 0;
    int c = 0;
    int A = 0;
    int B = 0;
    int C = 0;
public:
    Triangle(int , int , int , int , int , int );
    void calc_print() const;
};
#endif //UNTITLED15_TRIANGLE_H
