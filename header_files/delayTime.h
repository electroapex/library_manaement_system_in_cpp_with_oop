#ifndef DELAYTIME_H
#define DELAYTIME_H

#include <chrono>
#include <thread>

using namespace std;

inline void DelayTime(int ms) {
    this_thread::sleep_for(chrono::milliseconds(800));
}

#endif
