#include "rTriangle.h"

rTriangle::rTriangle(int a, int b, int c, int A, int B, int C) : Triangle("Прямоугольный треугольник", a, b, c, A, B, C){
    if (name == "Прямоугольный треугольник" && C != 90)
    {
        throw Err_Figure("Ошибка создания фигуры. Причина: угол С не равен 90 градусов");
    }
    cout << name <<  " (стороны " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан" << endl;

}
