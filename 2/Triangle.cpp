#include "Triangle.h"
Triangle::Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C):a(side_a), b(side_b), c(side_c), A(angle_A), B(angle_B), C(angle_C) {}

void Triangle::calc_print() const{
    cout << "Стороны: " << "a = " <<  a << ", b = " << b << ", c = " << c << endl;
    cout << "Углы: " << "A = " << A << ", B = " << B << ", C = " << C << endl;
}
