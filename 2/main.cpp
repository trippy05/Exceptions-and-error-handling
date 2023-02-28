#include <iostream>
#include "half.h"
#include "Triangle.h"
#include "isoscelesTriangle.h"
#include "rightTriangle.h"
#include "Quadrilateral.h"
#include "equilateralTriangle.h"
#include "Parallelogram.h"
#include "Phombus.h"
#include "Rectangle.h"
#include "Square.h"
#include "Error.h"
using namespace std;
int main() {
  Triangle f1(10, 20, 30, 50, 60, 70); //правильный
  rightTriangle f2(10, 20, 30, 50, 60, 80);//неправильный(угол С не равен 90)
  isoscelesTriangle f3(20, 30, 60, 70);//неправильный
  equilateralTriangle f4(10, 60);//правильный
  Quadrilateral f5(10, 20, 30, 40, 50, 60, 70, 80);//неправильный
  Parallelogram f6(10, 20, 50, 60);//правильный
  Phombus f7(10, 50, 60);//правильный
  Rectangle f8(10, 20, 90, 80);//неправильный(углы не равны 90)
  Square f9(10, 80);//неправильный(углы не равны 90)
  try {
      errTriangle(10, 20, 30, 50, 60, 70);
      cout << "Треугольник: " << endl;
      cout << "Собран" << endl;
      printdata(&f1);

      cout << endl;
  }
  catch (invalid_argument& e)
  {
      cerr << e.what() << endl;

  }
  try {
      errRightTriangle(80);
      cout << "Прямоугольный треугольник: " << endl;
      cout << "Собран" << endl;
      printdata(&f2);
      cout << endl;
  }
  catch (invalid_argument& e)
  {
      cerr << e.what() << endl;

  }
  try {
      errIsosceleesTriangle(20, 30, 60, 70);
      cout << "Равнобедренный треугольник: " << endl;
      cout << "Собран" << endl;
      printdata(&f3);
      cout << endl;
  }
  catch (invalid_argument& e)
  {
      cerr << e.what() << endl;

  }

  try {
      errEquilateralTriangle(10, 10, 10, 60, 60, 60);
      cout << "Равносторонний треугольник: " << endl;
      cout << "Собран" << endl;
      printdata(&f4);
      cout << endl;
  }
  catch (invalid_argument& e)
  {
      cerr << e.what() << endl;

  }


  try{
      errQuadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
      cout << "Четырехугольник: " << endl;
      cout << "Собран" << endl;
    printdata(&f5);
    cout << endl;
  }
  catch (invalid_argument& e)
  {
      cerr << e.what() << endl;

  }

  try {
      errParallelogram(10, 20, 10, 20, 50, 60, 50, 60);
      cout << "Параллелограмм: " << endl;
      cout << "Собран" << endl;
      printdata(&f6);
      cout << endl;
  }
  catch (invalid_argument& e)
  {
      cerr << e.what() << endl;

  }
  try {
      errPhombus(10, 10, 10, 10, 50, 60, 50, 60);
      cout << "Ромб: " << endl;
      cout << "Собран" << endl;
      printdata(&f7);
      cout << endl;
  }
  catch (invalid_argument& e)
  {
      cerr << e.what() << endl;

  }

  try {
      errRectangle(10, 20, 10, 20, 90, 80, 90, 80);
      cout << "Прямоугольник: " << endl;
      cout << "Собран" << endl;
      printdata(&f8);
      cout << endl;
  }
  catch (invalid_argument& e)
  {
      cerr << e.what() << endl;

  }
  try {
      errSquare(10, 10, 10, 10, 80, 80, 80,80);
      cout << "Квадрат: " << endl;
      cout << "Собран" << endl;
      printdata(&f9);
  }
  catch (invalid_argument& e)
  {
      cerr << e.what() << endl;

  }
}