#include "Address.h"

bool Address::setCity(std::string City){
    if(City ==""){
        return false;
    } else{
        city = City;
        return true;
    }
}
bool Address::setStreet(std::string Street){
    if(Street ==""){
        return false;
    } else{
        street = Street;
        return true;
    }
}
bool Address::setHouse(int House){
    if(House <= 0){
        return false;
    } else{
        house = House;
        return true;
    }
}
bool Address::setAppart(int Appart){
    if(Appart <= 0){
        return false;
    } else{
        appart = Appart;
        return true;
    }
}

std::string Address::getCity(){
    return city;
}
std::string Address::getStreet(){
    return street;
}
int Address::getHouse(){
    return house;
}
int Address::getAppart(){
    return appart;
}


void Address::delMEM(Address*& address)
{
    if (address)
    {
        delete[] address;
        address = nullptr;
    }
}