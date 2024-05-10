#include <iostream>

enum months {
    Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12
};

int main() {
    int m;
    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> m;

        switch (m) {
            case Jan:
                std::cout << "Январь" << std::endl;
                break;
            case Feb:
                std::cout << "Февраль" << std::endl;
                break;
            case Mar:
                std::cout << "Март" << std::endl;
                break;
            case Apr:
                std::cout << "Апрель" << std::endl;
                break;
            case May:
                std::cout << "Май" << std::endl;
                break;
            case Jun:
                std::cout << "Июнь" << std::endl;
                break;
            case Jul:
                std::cout << "Июль" << std::endl;
                break;
            case Aug:
                std::cout << "Август" << std::endl;
                break;
            case Sep:
                std::cout << "Сентябрь" << std::endl;
                break;
            case Oct:
                std::cout << "Октябрь" << std::endl;
                break;
            case Nov:
                std::cout << "Ноябрь" << std::endl;
                break;
            case Dec:
                std::cout << "Декабрь" << std::endl;
                break;
            case 0:
                std::cout << "До свидания" << std::endl;
                break;
            default:
                std::cout << "Неправильный номер!" << std::endl;
        }
    } while (m != 0);

    return 0;
}
