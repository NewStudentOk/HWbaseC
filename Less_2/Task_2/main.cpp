#include <iostream>

struct bankCheck  //Создание структуры
{
    int number = 0; // Номер счета
    std::string firstName; // Имя владельца
    int balance = 0; // Текущий баланс
};
void newBalance(bankCheck& fo){
    std::cin >> fo.balance;
}

int main(int argc, char** argv) {

    bankCheck fo; // это объект структуры с типом данных, именем структуры, bankCheck

    std::cout << "Введите номер счёта: ";
    std::cin >> fo.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> fo.firstName;
    std::cout << "Введите баланс: ";
    std::cin >> fo.balance;
    std::cout << "Введите новый баланс: ";
    newBalance(fo);
    std::cout << "Ваш счёт: " << fo.firstName << ", " << fo.number << ", " << fo.balance << std::endl;
    return 0;
}
