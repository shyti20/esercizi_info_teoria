#include "paziente.h"

Paziente::Paziente() {
    cf = "Undefined";
}

Paziente::Paziente(Data nascita, string cf, string nome, string cognome) : Persona(nome, cognome) {
    this->cf = cf;
    this->nascita = nascita;    
}

void Paziente:leggi() {
    nascita.read();

    cout << endl << "Inserisci il codice fiscale: ";
    cin >> cf;
}

void Paziente::stampa() {
    cout << endl << "Nome paziente: " << nome;
    cout << endl << "Cognome paziente: " << cognome;
    nascita.print();
    cout << endl << "Codice fiscale: " << cf;
}