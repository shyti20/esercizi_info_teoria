#ifndef POLIGONO_H
#define POLIGONO_H

#include "figura.h"

class Poligono : public Figura {
    public:
        Poligono();
        virtual ~Poligono();
        virtual void stampa(); = 0;
};
#endif