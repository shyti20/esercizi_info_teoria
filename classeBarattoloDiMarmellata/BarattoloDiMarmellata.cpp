#include "BarattoloDiMarmellata.h"

BarattoloDiMarmellata::BarattoloDiMarmellata() {
    Data temp;
    code = 0;
    prezzo = 0.0;
    scadenza = temp;
    arrivo = temp;
    nome = "Undefined";
}

BarattoloDiMarmellata::BarattoloDiMarmellata(Data scadenza, int code, string nome, Data arrivo, float prezzo) {
    this->code = code;
    this->prezzo = prezzo;
    this->scadenza = scadenza;
    this->arrivo = arrivo;
    this->nome = nome;
}

BarattoloDiMarmellata::~BarattoloDiMarmellata() {

}

void BarattoloDiMarmellata::setNome(string nome) {
    this->nome = nome;
}

void BarattoloDiMarmellata::setCode(int code) {
    this->code = code;
}

void BarattoloDiMarmellata::setScadenza(Data scadenza) {
    this->scadenza = scadenza;
}

void BarattoloDiMarmellata::setArrivo(Data arrivo) {
    this->arrivo = arrivo;
}

void BarattoloDiMarmellata::setPrezzo(float prezzo) {
    this->prezzo = prezzo;
}

string BarattoloDiMarmellata::getNome() {
    return nome;
}

int BarattoloDiMarmellata::getCode() {
    return code;
}

Data BarattoloDiMarmellata::getScadenza() {
    return scadenza;
}

Data BarattoloDiMarmellata::getArrivo() {
    return arrivo;
}

float BarattoloDiMarmellata::getPrezzo() {
    return prezzo;
}