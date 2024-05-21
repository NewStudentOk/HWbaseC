#include "Figure.h"

const std::string Figure::get_name() const { return title; }

void Figure::print_class()
{
    std::cout << this->get_name() << ":\n";
}