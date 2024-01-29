#include "quadrato.h"
#include <iostream>

Quadrato::Quadrato() {
    lati = 1;
}

Quadrato::~Quadrato() {

}

void Quadrato::stampa() {
    cout << endl << "Lato quadrato: " << lati;
}