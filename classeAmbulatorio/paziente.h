#ifndef PAZIENTE_H
#define PAZIENTE_H

#include <iostream>
#include "data.h"
#include "persona.h"

using namespace std;

class Paziente : public Persona {
    private:
        Data nascita;
        string cf;
    public:
        Paziente();
        Paziente(Data nascita, string cf, string nome, string cognome);
        void leggi();
        void stampa();
};
#endif