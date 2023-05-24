#include "util/std.hpp"
#include "Map.cpp"
#include "Chat.cpp"

int main() {
    std::cout << "TEST";

    Map map = Map();
    Chat chat = Chat();

    map.registerListener(chat);
    map.load("yeah.txt");


    return 0;
}