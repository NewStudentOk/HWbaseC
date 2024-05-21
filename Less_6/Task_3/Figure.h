#pragma once

#include <iostream>

class Figure
{
private:
    std::string title;

public:
    Figure(const std::string& name = "Фигура") :title{ name } {}
    const std::string get_name() const;
    virtual void print_class();
};