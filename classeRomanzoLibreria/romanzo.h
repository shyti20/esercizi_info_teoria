#ifndef ROMANZO_H
#define ROMANZO_H

#include <iostream>
#include "libro.h"

using namespace std;

class Romanzo : public Libro{
    private:
        string autore;
        string titolo;
        float prezzo;
    public:
        Romanzo();
        Romanzo(string ISBN, string autore, string titolo, float prezzo);
        ~Romanzo();
        void setAutore(string autore);
        void setTitolo(string titolo);
        void setPrezzo(string prezzo);
        string getAutore();
        string getTitolo();
        float getPrezzo();
        void setAll(string ISBN, string autore, string titolo, float prezzo);
        void leggi();
        bool operator!=(Romanzo newLibro);
    friend ostream& operator<<(ostream& out, Romanzo newLibro);
};
#endif