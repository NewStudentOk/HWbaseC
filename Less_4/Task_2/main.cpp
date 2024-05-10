#include <iostream>
#include <fstream>
#include "Address.h"

int main(int argc, char** argv) {
    int addressCount=0;
    Address* address = nullptr;
    std::ifstream file("in.txt");
    if (file.is_open())
    {

        if ((file >> addressCount) && addressCount > 0)
        {
            address = new Address[addressCount];
            for (int i = 0; i < addressCount; ++i)
            {
                std::string str;
                int intVal;
                if (!(file >> str && address[i].setCity(str) &&
                      file >> str && address[i].setStreet(str) &&
                      file >> intVal && address[i].setHouse(intVal) &&
                      file >> intVal && address[i].setAppart(intVal)))
                {
                    Address::delMEM(address);
                    break;
                }
            }
        }
        else {
            std::cout << "Ошибка чтения файла" << std::endl;
        }

        file.close();
    }
    else {
        std::cout << "Ошибка открытия файла" << std::endl;
    }

    //сортировка
    if (address)
    {
        bool cont;
        do {
            cont = false;
            Address temp = address[0]; // temp временная переменная для сравнения порядка городов
            for (int i = 1; i < addressCount; ++i){
                if (address[i].getCity() < temp.getCity()){
                    address[i-1] = address[i];
                    address[i] = temp;
                    cont = true;
                } else temp = address[i];
            }
        } while (cont);
    }

    // пишу в файл
    std::ofstream file_wr("out.txt");
    if (file_wr.is_open())
    {
        if (address)
        {
            file_wr << addressCount << std::endl;
            for (int i = 0; i < addressCount; ++i)
            {
                file_wr << address[i].getCity() << ", "
                        << address[i].getStreet() << ", "
                        << address[i].getHouse() << ", "
                        << address[i].getAppart() << std::endl;
            }
            std::cout << "Смотри файл: out.txt" << std::endl;
        }
        else
            std::cout << "Ошибка" << std::endl;

        file_wr.close();
    }
    else std::cout << "Не удалось сохранить файл: ut.txt" << std::endl;

    Address::delMEM(address);
    return 0;
}
