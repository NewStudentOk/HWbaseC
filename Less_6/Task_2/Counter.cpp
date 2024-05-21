#include "Counter.h"

int Counter::getStart() const
{
    return start;
}

void Counter::add() {
    start = start + 1;
}

void Counter::subtract_start_1() {
    start = start - 1;
}
