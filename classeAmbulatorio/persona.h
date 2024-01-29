#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona {
    private:
        string nome;
        string cognome;
    public:
        Persona();
        Persona(string nome, string cognome);
        virtual void leggi() = 0;
        virtual void stampa() = 0;
};
#endif