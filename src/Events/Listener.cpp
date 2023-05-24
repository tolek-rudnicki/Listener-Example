#ifndef Listener_CPP
#define Listener_CPP

#include "../util/std.hpp"
#include "./Event.cpp"

class Listener {

    public:
        void receiveEvent(Event e) { std::cout << "received event: " << e.type << std::endl; }

};

#endif