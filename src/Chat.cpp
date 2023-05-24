#ifndef Chat_CPP
#define Chat_CPP

#include "util/std.hpp"
#include "Events/Listener.cpp"

class Chat : public Listener {
    public:
        void receiveEvent(Event e) { 
            if (e.type == "MapLoadedEvent") {
                std::cout << "Map loaded" << std::endl;
            }
        }

};

#endif