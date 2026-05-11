#ifndef MANUSIA_H
#define MANUSIA_H

#include "jantung.h"
using namespace std;

class manusia {
public:
    string name;
    jantung varJantung;

    manusia(string pName)
        : name(pName) {
        cout << name << " hidup\n";
    }
};

#endif