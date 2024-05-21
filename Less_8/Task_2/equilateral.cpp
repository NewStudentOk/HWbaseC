#include "equilateral.h"

Equilateral::Equilateral(int a, int b, int c, int A, int B, int C) : Triangle("Равносторонний треугольник", a, b, c, A, B, C){
    if (name == "Равносторонний треугольник")
        {
            if (a != b && b != c)
            {
                throw Err_Figure("Ошибка создания фигуры. Причина: стороны не равны");
            }
            else if (A != 60 && B != 60 && C != 60)
            {
                throw Err_Figure("Ошибка создания фигуры. Причина: углы не равны 60 градусам");
            }
        }
    cout << name <<  " (стороны " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан" << endl;
}