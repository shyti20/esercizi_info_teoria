#include "ambulatorio.h"

Ambulatorio::Ambulatorio() {
    dim = 1;
    medici = Medico[dim];
}

Ambulatorio::Ambulatorio(int dim, Medico* med) {
    this->dim = dim

    if (dim <= 0) {
        dim = 1
        medici = Medico[dim];

        for (int i = 0; i < this->dim; i++) {
            medici[i] = med[i];
        }
    }
}

Ambulatorio::~Ambulatorio() {
    delete[]medici;
}
