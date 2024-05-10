#include <iostream>

struct address {
    std::string town;
    std::string street;
    int numberHouse = 0;
    int numberAppart = 0;
    int index = 0;
};

void showInfo(address object) {
    std::cout << "Город: " << object.town << std::endl;
    std::cout << "Улица: " << object.street << std::endl;
    std::cout << "Номер дома: " << object.numberHouse << std::endl;
    std::cout << "Номер квартиры: " << object.numberAppart << std::endl;
    std::cout << "Индекс: " << object.index << std::endl;
};

int main(int argc, char **argv) {

    address address1;

    std::cout << "Введите город: ";
    std::cin >> address1.town;
    std::cout << "Введите улицу: ";
    std::cin >> address1.street;
    std::cout << "Введите номер дома: ";
    std::cin >> address1.numberHouse;
    std::cout << "Введите номер квартиры: ";
    std::cin >> address1.numberAppart;
    std::cout << "Введите индекс: ";
    std::cin >> address1.index;
    std::cout << std::endl;

    struct address *pAddress;
    pAddress = &address1;

    std::cout << "Город: " << pAddress->town << std::endl;
    std::cout << "Улица: " << pAddress->street << std::endl;
    std::cout << "Номер дома: " << pAddress->numberHouse << std::endl;
    std::cout << "Номер квартиры: " << pAddress->numberAppart << std::endl;
    std::cout << "Индекс: " << pAddress->index << std::endl;
    std::cout << std::endl;

    address address2;
    address2.town = "Ижевск";
    address2.street = "Пушкина";
    address2.numberHouse = 59;
    address2.numberAppart = 143;
    address2.index = 953769;

    address address3 = address2;
    showInfo(address3);

    return 0;
}

