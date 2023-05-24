#ifndef Observable_CPP
#define Observable_CPP

#include "../util/std.hpp"
#include "Listener.cpp"

class Observable {

    protected:
        Listener listeners [10];

    public:
        Observable* registerListener(Listener l) {
            this->listeners[0] = l;
            return this;
        }
        void emit(const Event e) {
            for (int i = 0; i < 10; ++i) {
                listeners[i].receiveEvent(e);
            }
        }

};

#endif