#pragma once
#include "err_figure.h"
#include "figure.h"

class Triangle : public Figure
{
protected:
    int a, b, c;
    int A, B, C;
    Triangle(std::string name, int a, int b, int c, int A, int B, int C);
public:
    Triangle(int a, int b, int c, int A, int B, int C);
    int get_a();
    int get_b();
    int get_c();
    int get_A();
    int get_B();
    int get_C();
};