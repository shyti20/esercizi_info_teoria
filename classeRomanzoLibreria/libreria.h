#ifndef LIBRERIA_H
#define LIBRERIA_H

#include <iostream>
#include "romanzo.h"

using namespace std;

class Libreria {
    private:
        int dim;
        Romanzo libri*
        int max = 100;
    public:
        Libreria();
        ~Libreria();
        void leggi();
        int ricerca(Romanzo newLibro);
        Libreria& operator+(Romanzo newLibro);
        Libreria& operator--(int);
        Libreria& operator!();
    friend ostream& operator<<(ostream& out, Romanzo newLibro);
}
#endif