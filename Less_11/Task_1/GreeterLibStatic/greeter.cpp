#include "greeter.h"

namespace Greeter
{
    void greeter::greet(std::string name){
        std::cout << "Введите имя: ";
        std::cin >> name;
        std::cout << "Здравствуйте, " << name << "!" << std::endl;
    }
}