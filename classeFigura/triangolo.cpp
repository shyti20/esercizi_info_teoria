#include "triangolo.h"
#include <iostream>

Triangolo::Triangolo() {
    a = 1;
    b = 2;
    c = 3;
}

Triangolo::~Triangolo() {

}

void Triangolo::stampa() {
    cout << endl << "a = " << a;
    cout << endl << "b = " << b;
    cout << endl << "c = " << c; 
}