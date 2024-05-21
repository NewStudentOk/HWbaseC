#include "../GreeterLibStatic/greeter.h"
#include <chrono>
#include <thread>

int main() {
    Greeter::greeter greet;
    std::string name;
    greet.greet(name);
    std::this_thread::sleep_for(std::chrono::seconds(5));
    return 0;
}
