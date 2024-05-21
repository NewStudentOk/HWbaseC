#include "rectangle.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle("Прямоугольник", a, b, c, d, A, B, C, D) {
    if (name == "Прямоугольник")
    {
        if (a != c || b != d)
        {
            throw Err_Figure("Ошибка создания фигуры. Причина: стороны a и с(b и d) не равны");
        }
        if (A != 90 || B != 90 || C != 90 || D != 90)
        {
            throw Err_Figure("Ошибка создания фигуры. Причина: углы не равны 90 градусов");
        }
    }
    cout << name <<  " (стороны " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан" << endl;

}