#include "medico.h"

Medico::Medico() {
    speciali = "Undefined";
}

Medico::Medico(string speciali, string nome, string cognome) : Persona(nome, cognome) {
    this->speciali = speciali;    
}

