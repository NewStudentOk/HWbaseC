#pragma once
#include <string>

class Counter {
    private:
        int start;
    public:
        std::string answer;
        std::string oper;
    Counter() {
        this->start = 1;
    }

    Counter(int inStart) {
        this->start = inStart;
    }

    void add();

    int getStart() const;

    void subtract_start_1();
};

