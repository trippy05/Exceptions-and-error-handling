#include "Error.h"
#include <stdexcept>
using namespace std;
void errEquilateralTriangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C){ //все стороны равны, все углы равны 60
    if ((side_a == side_b) && ( side_b == side_c)) {
    }
    else{
        throw invalid_argument("Равносторонний треугольник: Ошибка создания фигуры. Причина: стороны не равны");
    }
    if ((angle_A == 60) && (angle_B == 60) && (angle_C == 60)){
    }
    else{
        throw invalid_argument("Равносторонний треугольник: Ошибка создания фигуры. Причина: углы не равны 60");
    }
}

void errIsosceleesTriangle(int side_a, int side_c, int angle_A, int angle_C){ //стороны a и c равны, углы A и C равны
    if (side_c != side_a){
        throw invalid_argument("Равнобедренный треугольник: Ошибка создания фигуры. Причина: стороны a и c не равны");
    }
    if (angle_C!=angle_A){
        throw invalid_argument("Равнобедренный треугольник: Ошибка создания фигуры. Причина: углы A и C не равны");
    }
}
void errParallelogram(int side_a, int side_b, int side_c, int side_d,  int angle_A, int angle_B, int angle_C, int angle_D){ //стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны
    if ((side_a != side_c) || (side_b != side_d)){
        throw invalid_argument("Параллелограмм: Ошибка создания фигуры. Причина: стороны a,c и b,d попарно не равны");
    }
    if ((angle_B != angle_D) || (angle_A!= angle_C)){
        throw invalid_argument("Параллелограмм: Ошибка создания фигуры. Причина: углы A,C и B,D попарно не равны");
    }
}
void errPhombus(int side_a, int side_b, int side_c, int side_d,  int angle_A, int angle_B, int angle_C, int angle_D){ //все стороны равны, углы A,C и B,D попарно равны
    if ((side_a == side_b) && (side_b == side_c) && (side_c == side_d)) {

    }
    else{
        throw invalid_argument("Равносторонний треугольник: Ошибка создания фигуры. Причина: стороны не равны");
    }
    if ((angle_A == angle_C) && (angle_B == angle_D)){

    }
    else{
        throw invalid_argument("Равносторонний треугольник: Ошибка создания фигуры. Причина: углы A,C и B,D попарно не равны");
    }
}

void errQuadrilateral(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D){ //стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360
    int sum = 0;
    sum = angle_A + angle_B + angle_C + angle_D;
    if ((side_d > 0) && (side_b > 0) && (side_a > 0) && (side_c > 0)){

    }
    else{
        throw invalid_argument("Четырехугольник: Ошибка создания фигуры. Причина:  количество сторон не равно 4");
    }
    if (sum == 360){
    }
    else{
        throw invalid_argument("Четырехугольник: Ошибка создания фигуры. Причина: сумма углов не равна 360");
    }

}
void errRectangle(int side_a, int side_b,int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D){ //стороны a,c и b,d попарно равны, все углы равны 90
    int sum;
    sum = angle_A+angle_B+angle_C+angle_D;
    if ((side_a!= side_c) || (side_b!= side_d)) {
        throw invalid_argument("Прямоугольник: Ошибка создания фигуры. Причина: стороны a,c и b,d попарно не равны");
    }
    if (sum != 360){
        throw invalid_argument("Прямоугольник: Ошибка создания фигуры. Причина: углы не равны 90");
    }
}
void errRightTriangle(int angle_C){ //угол C всегда равен 90)
    if (angle_C!= 90){
        throw invalid_argument("Прямоугольный треугольник: Ошибка создания фигуры. Причина: угол С не равен 90");
    }


}
void errSquare(int side_a, int side_b,int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D){ //все стороны равны, все углы равны 90
    if ((side_a == side_b) && (side_b == side_c) && (side_c == side_d)) {

    }
    else{
        throw invalid_argument("Квадрат: Ошибка создания фигуры. Причина: стороны не равны");
    }
    if ((angle_A == 90) && (angle_B == 90) && (angle_C == 90) && (angle_D == 90)){

    }
    else{
        throw invalid_argument("Квадрат: Ошибка создания фигуры. Причина: углы не равны 90");
    }
}
void errTriangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C){ //стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180
    int sum = 0;
    sum = angle_A+angle_B+angle_C;
    if ((side_b > 0) && (side_a > 0) && (side_c > 0)){
    }
    else{
        throw invalid_argument("Треугольник: Ошибка создания фигуры. Причина: количество сторон не равно 3");
    }
    if (sum == 180){
    }
    else{
        throw invalid_argument("Треугольник: Ошибка создания фигуры. Причина: сумма углов не равна 180");
    }


}