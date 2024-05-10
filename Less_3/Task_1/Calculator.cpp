#include "Calculator.h"

double Calculator::add() const {
    return num1 + num2;
}

double Calculator::multiply() const {
    return num1 * num2;
}

double Calculator::subtract_1_2() const {
    return num1 - num2;
}

double Calculator::subtract_2_1() const {
    return num2 - num1;
}

double Calculator::divide_1_2() const {
    return num1 / num2;
}

double Calculator::divide_2_1() const {
    return num2 / num1;
}

bool Calculator::set_num1(double num1) {
    if (num1 == 0)
        return false;
    else {
        this->num1 = num1;
        return true;
    }
}

bool Calculator::set_num2(double num2) {
    if (num2 == 0)
        return false;
    this->num2 = num2;
    return true;
}