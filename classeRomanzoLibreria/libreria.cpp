#include <iostream>
#include "libreria.h"

using namespace std;

Libreria::Libreria() {
    dim = 1;
    libri = Romanzo[dim];
}

Libreria::~libreria() { delete[]libri }

void Libreria::leggi() {
    do {
        cout << endl <<"Inserire il numero di romanzi da inserire: ";
        cout >> dim;
    }while (dim < 0 || dim > capienzaMax);    
    delete[] libri;
    Romanzo* libri = new Romanzo[dim];
    for (int i = 0; i < dim; i++) {
        cout << endl << "Inserire il codice ISBN del libro: ";
        cin >> libri[i].ISBN;
        cout << endl << "Inserire il nome dell'autore: ";
        cin >> libri[i].autore;
        cout << endl << "Inserire il titolo del libro: ";
        cout >> libri[i].titolo;
        do {
            cout << "Inserire il prezzo del libro: ";
            cin >> libri[i].prezzo;
        }while (libri[i].prezzo <= 0);
    }
}

int Libreria::ricerca(Romanzo newLibro) {
    int i = 0;

    while (i < dim && newLibro.getISBN() != getISBN()) {
        i++;
    }

    if (i < dim)
        return i;
    else 
        return -1;
}

Libreria& Libreria::operator+(Romanzo newLibro) {
    int pos = ricerca(newLibro);

    if (pos != -1) {
        Libreria temp;
        for (i = 0; i < dim; i++) {
            temp.libri[i] = libri[i];
        }
        delete[]libri;
        dim++;

        libri = Romanzo[dim];

        for (i = 0; i < dim; i++) {
            libri[i] = temp.libri[i];
        }

        return *this;
    } else {
        cout << endl << "Il libro e' gia inserito!";
        return *this;
    }
}

Libreria& Libreria::operator--(int) {
    Romanzo newLibro;

    newLibro.leggi();

    int pos = ricerca(newLibro);

    Libreria temp;

    for (i = 0; i < dim; i++) {
        temp.libri[i] = libri[i];
    }

    dim--;
    delete[]libri;

    for (i = pos; i < dim; i++) {
        libri[i] = libri[i + 1];
    }

    libri = Romanzo[dim];

    for (i = 0; i < dim; i++) {
        libri[i] = temp.libri[i];
    }

    return *this;
}

Libreria& Libreria::operator!() {
    for (i = 0; i < dim; i++) {
        libri[i].setPrezzo(libri[i].getPrezzo - 0.10);
    }
}

ostream& operator<<(ostream& out, Romanzo newLibro) {
    cout << endl << "Codice: " << getISBN();
    cout << endl << "Autore: " << getAutore();
    cout << endl << "Titolo: " << getTitolo();
    cout << endl << "Prezzo: " << getPrezzo();
}