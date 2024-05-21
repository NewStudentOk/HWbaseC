#include "triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
    sides_count = 3;
    name = "Треугольник";
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;

        if (A+B+C != 180)
        {
            throw Err_Figure("Ошибка создания фигуры. Причина: сумма углов не равна 180");
        }
        else if (sides_count != 3)
        {
            throw Err_Figure("Ошибка создания фигуры. Причина: количество сторон не равна 3");
        }
        cout << name <<  " (стороны " << a << ", " << b << ", " << c << "; углы " << A << ", " << B << ", " << C << ") создан" << endl;

}
Triangle::Triangle(std::string name, int a, int b, int c, int A, int B, int C)
{
    sides_count = 3;
    this->name = name;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;

}
int Triangle::get_a()
{
    return a;
}
int Triangle::get_b()
{
    return b;
}
int Triangle::get_c()
{
    return c;
}
int Triangle::get_A()
{
    return A;
}
int Triangle::get_B()
{
    return B;
}
int Triangle::get_C()
{
    return C;
}