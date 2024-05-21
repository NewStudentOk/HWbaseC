#include "isosceles.h"

Isosceles::Isosceles(int a, int b, int c, int A, int B, int C) : Triangle("Равнобедренный треугольник", a, b, c, A, B, C){
    if (name == "Равнобедренный треугольник")
        {
            if (a != c)
            {
                throw Err_Figure("Ошибка создания фигуры. Причина: стороны a и c не равны");
            }
            else if (A != C)
            {
                throw Err_Figure("Ошибка создания фигуры. Причина: углы A и C не равны");
            }
        }
    cout << name <<  " (стороны " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан" << endl;
}