#include <iostream>
#include "half.h"
/*
Triangle::Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C):a(side_a), b(side_b), c(side_c), A(angle_A), B(angle_B), C(angle_C) {}

void Triangle::calc_print() const{
    cout << "a = " <<  a << ", b = " << b << ", c = " << c << ", A = " << A << ", B = " << B << ", C = " << C << endl;
}

rightTriangle::rightTriangle (int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C): Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C){
    angle_C = 90;
}

isoscelesTriangle::isoscelesTriangle(int side_b, int side_c, int angle_B, int angle_C): Triangle(side_c, side_b, side_c, angle_C, angle_B, angle_C){
}

equilateralTriangle::equilateralTriangle(int side_a, int angle_A): Triangle(side_a, side_a, side_a, angle_A, angle_A, angle_A){}

Quadrilateral::Quadrilateral(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D):a(side_a), b(side_b), c(side_c), d(side_d), A(angle_A), B(angle_B), C(angle_C), D(angle_D){}

void Quadrilateral::calc_print() const{
    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << endl;
}
Parallelogram::Parallelogram(int side_a, int side_b, int angle_A, int angle_B): Quadrilateral(side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B){
}

Phombus::Phombus(int side_a, int angle_A, int angle_B): Parallelogram(side_a, side_a, angle_A, angle_B){
}

Rectangle::Rectangle(int side_a, int side_b, int angle_A = 90, int angle_B = 90): Parallelogram(side_a, side_b, angle_A, angle_B){}

Square::Square(int side_a, int angle_A): Rectangle(side_a, side_a, angle_A, angle_A){}
*/
void printdata(Figure* f)
{
    f->calc_print();
}