#ifndef CARS_H
#define CARS_H
#include <iostream>
#include "Date.h"

using namespace std;

class Cars {
    private:
        static int cont;
        int targa;
        string modello;
        int nPosti;
        float valore;
        Date data;
    public:
        Cars();
        Cars(int targa, string modello, int nPosti, float valore, Date data);
        void setTarga(string targa);
        void setModello(string modello);
        void setnPosti(int nPosti);
        void setValore(float valore);
        void setData(Date data);
        int getTarga();
        string getModello();
        int getnPosti();
        float getValore();
        Date getData();
};
#endif