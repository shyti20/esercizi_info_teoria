#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona {
    private:
        string nome;
        string cognome;
        int eta;
    public:
        Persona();
        Persona(string nome, string cognome, int eta);
        ~Persona();
        void setNome(string nome);
        void setCognome(string cognome);
        void setEta(int eta);
        string getNome();
        string getCognome();
        int getEta();
};
#endif