#include "square.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle("Квадрат", a, b, c, d, A, B, C, D) {
    if (name == "Квадрат")
    {
        if (a != b && b != c && c != d)
        {
            throw Err_Figure("Ошибка создания фигуры. Причина: стороны не равны");
        }
        if (A != 90 && B != 90 && C != 90 && D != 90)
        {
            throw Err_Figure("Ошибка создания фигуры. Причина: углы не равны 90 градусов");
        }
    }
    cout << name <<  " (стороны " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан" << endl;
};