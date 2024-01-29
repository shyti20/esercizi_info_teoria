#include "persona.h"

Persona::Persona() {
    nome = "Undefined";
    cognome = "Undefined";
}

Persona::Persona(string nome, string cognome) {
    this->nome = nome;
    this->cognome = cognome;
}