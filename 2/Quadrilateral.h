#pragma once
#include <iostream>
#include "Figure.h"
#ifndef UNTITLED15_QUADRILATERAL_H
#define UNTITLED15_QUADRILATERAL_H
using namespace std;
class Quadrilateral: public Figure{
private:
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
public:
    Quadrilateral(int, int, int, int, int, int, int, int);

    void calc_print() const;
};

#endif //UNTITLED15_QUADRILATERAL_H
