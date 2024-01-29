#ifndef BASE_H
#define BASE_H

#include <iostream>
#include "medico.h"
#include "paziente.h"

using namespace std;

class Base : protected Medico {
    private:
        int nMax = 100;
        int dim;
        Paziente* paz;
    public:
        Base();
        Base(const Base newBase);
        ~Base();
        void leggi();
        void stampa();
        //Base& operator++();
        //Base& operator-(Paziente& newPaziente);
};
#endif