#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>

using namespace std;

class Libro {
    private:
        string ISBN;
    public:
        Libro();
        Libro(string ISBN);
        virtual ~Libro();
        void setISBN(string ISBN);
        string getISBN();
        virtual leggi() = 0;
        virtual stamapa();
};
#endif