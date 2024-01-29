#include <iostream>
#include "romanzo.h"

using namespace std;

Romanzo::Romanzo() {
    autore = "Undefined";
    titolo = "Undefined";
    prezzo = 0.0;
}

Romanzo::Romanzo(string ISBN, string autore, string titolo, float prezzo) : Libro(ISBN) {
    this->autore = autore;
    this->titolo = titolo;
    this->prezzo = prezzo;

    if (this->autore == "") this->autore = "Undefined";
    if (this->titolo == "") this->titolo = "Undefined";
    if (this->prezzo < 0.0) this->prezzo = 0.0; 
}

Romanzo::~Romanzo() {}

void Romanzo::setAutore(string autore) {
    this->autore = autore;
    if (this->autore == "") this->autore = "Undefined";
}

void Romanzo::setTitolo(string titolo) {
    this->titolo = titolo;
    if (this->titolo == "") this->titolo = "Undefined";
}

void Romanzo::setPrezzo(float prezzo) {
    this->prezzo = prezzo;

    if (this->prezzo < 0.0) this->prezzo = 0.0;
}

string Romanzo::getAutore() { return autore; }

string Romanzo::getTitolo() { return titolo; }

float Romanzo::getPrezzo() { return prezzo; }

void Romanzo::setAll(string ISBN, string autore, string titolo, float prezzo) : Libro(ISBN) {
    this->autore = autore;
    this->titolo = titolo;
    this->prezzo = prezzo;

    if (this->autore == "") this->autore = "Undefined";
    if (this->titolo == "") this->titolo = "Undefined";
    if (this->prezzo < 0.0) this->prezzo = 0.0;
}

void Romanzo::leggi() {
    cout << endl << "Inserire il codice ISBN del libro: ";
    cin >> ISBN;
    cout << endl << "Inserire il nome dell'autore: ";
    cin >> autore;
    cout << endl << "Inserire il titolo del libro: ";
    cout >> titolo;
    do {
        cout << "Inserire il prezzo del libro: ";
        cin >> prezzo;
    }while (prezzo <= 0);
}

bool Romanzo::operator!=(Romanzo newLibro) {
    if (newLibro.getISBN() != getISBN() && autore != newLibro.autore && titolo != newLibro.titolo && prezzo != newLibro.prezzo) {
        return true;
    } else {
        return false;
    }
}

ostream& operator<<(ostream& out, Romanzo newLibro) {
    cout << endl << "Codice: " << getISBN();
    cout << endl << "Autore: " << getAutore();
    cout << endl << "Titolo: " << getTitolo();
    cout << endl << "Prezzo: " << getPrezzo();
}