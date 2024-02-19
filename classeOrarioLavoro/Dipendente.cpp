#include "Dipendente.h"

Dipendente::Dipendente() {
    nome = "Undefined";
    cognome = "Undefined";
    setAll(0, 0);
}

Dipendente::Dipendente(string nome, string cognome, Ora orario) {
    this->nome = nome;
    this->cognome = cognome;
    this->orario = orario;
}

Dipendente::~Dipendente() { }

void Dipendente::setNome(string nome) {
    this->nome = nome;
}

void Dipendente::setCognome(string cognome) {
    this->cognome = cognome;
}

void Dipendente::setOrario(Ora orario) {
    this->orario = orario;
}

string Dipendente::getNome() { return nome; }

string Dipendente::getCognome() { return cognome; }

Ora Dipendente::getOrario() { return orario; }

void Dipendente::setAll(string nome, string cognome, int ora, int minuti) {
    this->nome = nome;
    this->cognome = cognome;
    orario.setOra(ora);
    orario.setMinuti(minuti);
}