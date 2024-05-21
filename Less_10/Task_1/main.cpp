#include <iostream>
#include <string>
#include <unistd.h>

int main() {
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << "Здравствуйте, " << name << "!" << std::endl;
    sleep(5);
    return 0;
}
