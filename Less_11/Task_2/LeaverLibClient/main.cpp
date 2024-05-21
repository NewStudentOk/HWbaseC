#include "../LeaverLibDinamic/Leaver.h"
#include <chrono>
#include <thread>

int main() {
    Leaver::Leaver leaver;
    std::string name;
    leaver.leave(name);
    std::this_thread::sleep_for(std::chrono::seconds(5));
    return 0;
}
