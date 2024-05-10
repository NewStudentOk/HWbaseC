#include <iostream>

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

    int getStart() const;

    void add();

    void subtract_start_1();
};

