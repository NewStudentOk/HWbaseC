#include "rhomb.h"

Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle("Ромб", a, b, c, d, A, B, C, D) {

    if (name == "Ромб")
    {
        if (a != b || b != c || c != d)
        {
            throw Err_Figure("Ошибка создания фигуры. Причина: стороны не равны");
        }
        else if (A != C && B != D)
        {
            throw Err_Figure("Ошибка создания фигуры. Причина: углы A и C(B и D) не равны");
        }
    }

    cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d << "; углы " << A << ", " << B << ", " << C << ", " << D << ") создан" << endl;

};