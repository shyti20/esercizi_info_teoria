#ifndef AMBULATORIO_H
#define AMBULATORIO_H

#include "base.h"

class Ambulatorio {
    private:
        Medico* medici;
        int dim;
        int nMax = 100;
    public:
        Ambulatorio();
        Ambulatorio(int dim, Medico* med);
        ~Ambulatorio();
        void changeMedico();
        int ricerca(string codeF);
};
#endif 