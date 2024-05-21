#include <iostream>
#include <limits>
#include "Counter.h"

int main(int argv, char** argc) {
    Counter counter;
    int i;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> counter.answer;
    if (counter.answer == "да" || counter.answer == "Да") {
        while (true) {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> i;
            if(std::cin.fail()){
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Это не число!" << std::endl;
                continue;
            }
            break;
        }
        counter = Counter(i);
    } else {
        std::cout << "Начальное значение счетчика по умолчанию: ";
        i = counter.getStart();
        std::cout << i << std::endl;
    }
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> counter.oper;
        if (counter.oper == "+") {
            counter.add();
        }
        if (counter.oper == "-") {
            counter.subtract_start_1();
        }
        if (counter.oper == "=") {
            std::cout << counter.getStart() << std::endl;
        }
    } while (counter.oper != "х" && counter.oper != "Х" && counter.oper != "x" && counter.oper != "X");
    {
        std::cout << "До свидания!" << std::endl;
    }
    return 0;
}