#include "quadrangle.h"


Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
{
    sides_count = 4;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    name = "Четырехугольник";

        if (A + B + C + D != 360)
        {
            throw Err_Figure("Ошибка создания фигуры. Причина: сумма углов не равна 360");
        }
        else if (sides_count != 4)
        {
            throw Err_Figure("Ошибка создания фигуры. Причина: количество сторон не равно 4");
        }
        cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d << "; углы " << A << ", " << B << ", " << C << ", " << D <<") создан" << endl;

}

Quadrangle::Quadrangle(std::string name, int a, int b, int c, int d, int A, int B, int C, int D) {
    sides_count = 4;
    this->name = name;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;

}
int Quadrangle::get_a()
{
    return a;
}
int Quadrangle::get_b()
{
    return b;
}
int Quadrangle::get_c()
{
    return c;
}
int Quadrangle::get_d()
{
    return d;
}
int Quadrangle::get_A()
{
    return A;
}
int Quadrangle::get_B()
{
    return B;
}
int Quadrangle::get_C()
{
    return C;
}
int Quadrangle::get_D()
{
    return D;
}