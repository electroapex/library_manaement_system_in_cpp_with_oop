#ifndef CLEARSCREEN_H
#define CLEARSCREEN_H

#include <cstdlib>

inline void ClearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

#endif
