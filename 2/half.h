#pragma once
#ifndef UNTITLED15_HALF_H
#define UNTITLED15_HALF_H
#include "Figure.h"
/*
class Figure{
public:
    virtual void calc_print() const = 0;
};
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
class rightTriangle: public Triangle{
public:
    rightTriangle (int , int , int , int , int , int );
};
class isoscelesTriangle: public Triangle{
public:
    isoscelesTriangle(int, int, int, int);

};
class equilateralTriangle: public Triangle{
public:
    equilateralTriangle(int, int);

};
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
class Parallelogram: public Quadrilateral{
public:
    Parallelogram(int, int, int, int);
};
class Phombus: public Parallelogram{
public:
    Phombus(int, int, int);

};
class Rectangle: public Parallelogram{
public:
    Rectangle(int, int, int, int);
};
class Square: public Rectangle{
public:
    Square(int, int);
};
*/
void printdata(Figure*);
#endif //UNTITLED15_HALF_H
