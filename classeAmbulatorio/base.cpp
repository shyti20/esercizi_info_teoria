#include "base.h"

Base::Base() {
    dim = 1;
    paz = Paziente[dim];
}

Base::Base(const Base& newBase) {

}

Base::~Base() { delete[]paz }

void Base::leggi() {
    do {
        cout << endl << "Inserisci la dimensione: ";
        cin >> dim;
    } while (dim <= 0 || dim > 100);

    delete[]paz;

    paz = Paziente[dim];

    cout << endl << "Inserisci il nome del medico: ";
    cin >> nome;

    cout << endl << "Inserisci il cognome del medico: ";
    cin >> cognome;

    for (int i = 0; i < dim; i++) {
        paz[i].leggi();
    }

}

void Base::stampa() {
    cout << endl << "Nome del medico: " << nome;
    cout << endl << "Cognome del medico: " << cognome;

    for (int i = 0; i < dim; i++) {
        paz[i].stampa();
    } 
}