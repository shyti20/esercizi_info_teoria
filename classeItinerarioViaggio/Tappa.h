#ifndef TAPPA_H
#define TAPPA_H

#include "Coordinata.h"
#include <iostream>

using namespace std;

class Tappa {
    private:
        Coordinate logitudine;
        Coordinate latitudine;
        string nome;
        int tempo;
    public:
        Tappa();
        Tappa(Coordinate lo, Coordinate la, string n, int t);
        Coordinate getLong();
        Coordinate getLati();
        string getNome();
        int getTempo();
        void setLong(Coordinate lo);
        void setLati(Coordinate la);
        void setNome(string n);
        void setTempo(int t);
        float distanza(Tappa t);
        bool operator!=(Tappa t);
        Tappa& operator=(Tappa t);
    friend ostream& operator<<(ostream& out, Tappa& newTappa);
    friend istream& operator>>(istream& in, Tappa& newTappa);
};
#endif