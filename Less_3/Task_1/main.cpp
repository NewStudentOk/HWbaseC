#include <iostream>
#include "Calculator.h"

int main() {
    double num1, num2;
    Calculator p;

    do {
        std::cout << "Введите num1: ";
        std::cin >> num1;
        if (!p.set_num1(num1)) {
            for (; !p.set_num1(num1);) {
                std::cout << "Неверный ввод! " << std::endl;
                std::cout << "Введите num1: ";
                std::cin >> num1;

            }
        }

        std::cout << "Введите num2: ";
        std::cin >> num2;
        if (!p.set_num2(num2)) {
            for (; !p.set_num2(num2);) {
                std::cout << "Неверный ввод! " << std::endl;
                std::cout << "Введите num2: ";
                std::cin >> num2;

            }
        }
        std::cout << "num1 + num2 = " << p.add() << std::endl;
        std::cout << "num1 - num2 = " << p.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << p.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << p.multiply() << std::endl;
        std::cout << "num1 / num2 = " << p.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << p.divide_2_1() << std::endl;

    } while (true);


}