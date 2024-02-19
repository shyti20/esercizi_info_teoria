#ifndef DIPENDENTE_H
#define DIPENDENTE_H
#include "Ora.h"
#include <iostream>

using namespace std;

class Dipendente {
    private:
        Ora orario;
        string nome;
        string cognome;
    public:
        Dipendente();
        Dipendente(string nome, string cognome, Ora orario);
        ~Dipendente();
        void setNome(string nome);
        void setCognome(string cognome);
        void setOrario(Ora orario);
        string getNome();
        string getCognome();
        Ora getOrario();
        void setAll(string nome, string cognome, int ora, int minuti);
};
#endif