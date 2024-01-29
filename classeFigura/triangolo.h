#ifndef TRIANGOLO_H
#define TRIANGOLO_H

#include "poligono.h"

class Triangolo : public Poligono {
    private:
        float a, b, c;
    public:
        Triangolo();
        virtual ~Triangolo();
        virtual void stampa();
};
#endif