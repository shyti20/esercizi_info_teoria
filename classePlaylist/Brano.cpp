#include <Brano.h>

Brano::Brano() {
    titolo = "Undefined";
    durata = 0;
    punt = 0;
}

Brano::Brano(string t, int d, int p) {
    this->titolo = t;
    this->durata = d;
    this->punt = p;
}

ostream& operator<<(ostream& out, Brano& newBrano) {
    out << endl << "Titolo: " << newBrano.titolo;
    out << endl << "Durata: " << newBrano.durata;
    out << endl << "Punteggio: " << newBrano.punt;

    return out;
}

istream& operator>>(istream& in, Brano& newBrano) {
    cout << endl << "Inserisci il titolo: ";
    in >> newBrano.titolo;

    cout << endl << "Inserisci la durata: ";
    in >> newBrano.durata;

    cout << endl << "Inserisci il punteggio: ";
    in >> newBrano.punt;

    return in;
}

string Brano::getTitolo() { return titolo; }

int Brano::getDurata() { return durata; }

int Brano::getPunt() { return punt; }

void Brano::setTitolo(string t) { titolo = t; }

void Brano::setDurata(int d) { durata = d; }

void Brano::setPunt(int p) { punt = p; }

void Brano::setAll(string t, int d, int p) {
    titolo = t;
    durata = d;
    punt = p;
}
