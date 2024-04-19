#include "Data.h"

Data::Data() {
    giorno = 0;
    mese = 0;
    anno = 0;
}

void Data::setGiorno(int giorno) {
    this->giorno = giorno;
}

void Data::setMese(int mese) {
    this->mese = mese;
}

void Data::setAnno(int anno) {
    this->anno = anno;
}