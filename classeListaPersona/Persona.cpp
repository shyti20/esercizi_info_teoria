#include "Persona.h"

Persona::Persona() {
    nome = "Undefined";
    cognome = "Undefined";
    eta = 0;
}

Persona::Persona(string nome, string cognome, int eta) {
    this->nome = nome;
    this->cognome = cognome;
    this->eta = eta; 
}

Persona::~Persona() { }

void Persona::setNome(string nome) {
    this->nome = nome;
}

void Persona::setCognome(string cognome) {
    this->cognome = cognome;
}

void Persona::setEta(int eta) {
    this->eta = eta;
}

string Persona::getNome() { return nome; }

string Persona::getCognome() { return cognome; }

int Persona::getEta() { return eta; }