#ifndef Event_CPP
#define Event_CPP

#include "../util/std.hpp"

class Event {
    public:
        std::string type;
        void * sender;
        Event(const std::string type) {
            this->type = type;
        }
};

#endif