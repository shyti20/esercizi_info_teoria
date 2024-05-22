#include "Cars.h"

int Cars::cont = 0;

Cars::Cars() {
    targa = cont++;
    modello = "Undefined";
    nPosti = 0;
    valore = 0;
    // viene richiamato il costruttore di default della classe Date
}

Cars::Cars(string targa, string modello, int nPosti, float valore, Date data) {
    targa = cont++;
    this->modello = modello;
    this->nPosti = nPosti;
    this->valore = valore;
    this->data = data;
}

void Cars::setTarga(string targa) {
    this->targa = targa;
}

void Cars::setModello(string modello) {
    this->modello = modello;
}

void Cars::setnPosti(int nPosti) {
    this->nPosti = nPosti;
}

void Cars::setValore(float valore) {
    this->valore = valore;
}

void Cars::setData(Date data) {
    this->data = data;
}

string Cars::getTarga() {
    return targa;
}

string Cars::getModello() {
    return modello;
}

int Cars::getnPosti() {
    return nPosti;
}

float Cars::getValore() {
    return valore;
}   

Date Cars::getData () {
    return data;
}
