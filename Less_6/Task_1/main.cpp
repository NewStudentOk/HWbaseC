#include <iostream>
#include "func.h"


int main()
{
    int a, b;
    int count;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> count;
    switch(count)
    {
        case 1: std::cout << add(a, b);
            break;
        case 2: std::cout << sub(a, b);
            break;
        case 3: std::cout << multi(a, b);
            break;
        case 4: std::cout << div1(a, b);
            break;
        case 5: std::cout << dig(a, b);
            break;
    }
}
