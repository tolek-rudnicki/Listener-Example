#ifndef Map_CPP
#define Map_CPP

#include "util/std.hpp"
#include "Events/Observable.cpp"

class Map : public Observable {
    public:
        void load(const std::string file) {
            // ... zaaduj

            Event e = Event("MapLoadedEvent");
            this->emit(e);
        }
};

#endif