#ifndef QUADRATO_H
#define QUADRATO_H

#include "poligono.h"

class Quadrato : public Poligono {
    private:
        float mLati;
    public:
        Quadrato()
        ~Quadrato();
        void stampa();
};
#endif