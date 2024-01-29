#ifndef MEDICO_H
#define MEDICO_H

#include <iostream>
#include "persona.h"

using namespace std;

class Medico : public Persona {
    protected:
        string speciali;
    public:
        Medico();
        Medico(string speciali, string nome, string cognome);
        virtual void leggi() = 0;
        virtual void stampa() = 0;
};

#endif