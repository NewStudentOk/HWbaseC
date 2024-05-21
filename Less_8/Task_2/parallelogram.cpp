#include "parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle("Параллелограмм", a, b, c, d, A, B, C, D) {
    if (name == "Параллелограмм")
    {
        if (a != c && b != d)
        {
            throw Err_Figure("Ошибка создания фигуры. Причина: стороны a и c(b и d) не равны");
        }
        else if (A != C && B != D)
        {
            throw Err_Figure("Ошибка создания фигуры. Причина: углы A и C(B и D) не равны");
        }
    }

    cout << name <<  " (стороны " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан" << endl;
};