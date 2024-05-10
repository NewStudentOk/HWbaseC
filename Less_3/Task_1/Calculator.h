#include <iostream>

class Calculator {
private:
    double num1 = 1;
    double num2 = 1;
public:
    Calculator() {
        num1 = 1;
        num2 = 1;
    }

    double add() const;

    double multiply() const;

    double subtract_1_2() const;

    double subtract_2_1() const;

    double divide_1_2() const;

    double divide_2_1() const;

    bool set_num1(double num1);

    bool set_num2(double num2);
};