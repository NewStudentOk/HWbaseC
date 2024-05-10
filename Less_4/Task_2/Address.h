#include <iostream>
#pragma once

class Address {
private:
    std::string city;
    std::string street;
    int house;
    int appart;
public:
    Address(){
        this->house = 0;
        this->appart = 0;
    }

    bool setCity(std::string City);

    bool setStreet(std::string Street);

    bool setHouse(int House);

    bool setAppart(int Appart);

    std::string getCity();

    std::string getStreet();

    int getHouse();

    int getAppart();

    static void delMEM(Address *&address);
};


