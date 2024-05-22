#include "Date.h"

Date::Date() {
    giorno = 1;
    mese = 1;
    anno = 1900;
}

Date::Date(int giorno, int mese, int anno) {
    this->giorno = giorno;
    this->mese = mese;
    this->anno = anno;
}

Date::Date(Date& date) {
    giorno = date.giorno;
    mese = date.mese;
    anno = date.anno;
}

void Date::setGiorno(int giorno) {
    this->giorno = giorno;
}

void Date::setMese(int mese) {
    this->mese = mese;
}

void Date::setAnno(int anno) {
    this->anno = anno;
}

int Date::getGiorno() {
    return giorno;
}

int Date::getMese() {
    return mese;
}

int Date::getAnno() {
    return anno;
}
