#include <iostream>
#include "triangle.h"
#include "isosceles.h"
#include "equilateral.h"
#include "rTriangle.h"
#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhomb.h"



int main()
{
    try {
        Triangle triangle(10, 20, 30, 50, 60, 70);
        rTriangle rTriangle(10, 20, 30, 40, 50, 90);
        Isosceles isosceles(40, 20, 40, 70, 40, 70);
        Equilateral equilateral(30, 30, 30, 60, 60, 60);
        Quadrangle quadrangle(10, 20, 30, 60, 150, 80, 90, 90);
        Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
        Square square(20, 20, 20, 20, 90, 90, 90, 90);
        Parallelogram parallelogram(30, 20, 30, 20, 110, 70, 110, 70);
        Rhomb rhomb(30, 30, 30, 30, 100, 80, 100, 80); // стороны не равны
    }
    catch (Err_Figure& exp)
    {
        std::cerr << exp.what();
    }

    return 0;
}