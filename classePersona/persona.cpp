#include <iostream>
#include "persona.h"

using namespace std;

Persona::Persona() {
    nome = "Mario";
    cognome = "Rossi";
    nascita.setData(1, 1, 1900);
}

Persona::Persona(string nome, string cognome, Data nascita) {
    this->nome = nome;
    this->cognome = cognome;
    this->nascita = nascita;
}

Persona::Persona(const Persona& p) {

}

Persona::~Persona() {

}

void Persona::setNascita(Data nascita) {
    this->nascita = nascita;
}

void Persona::setNome(string nome) {
    this->nome = nome;
}

void Persona::setCognome(string cognome) {
    this->cognome = cognome;
}

Data Persona::getNascita() {
    return nascita;
}

string Persona::getNome() {
    return nome;
}

string Persona::getCognome() {
    return cognome;
}

ostream& operator<<(ostream& out, const Persona& p) {
    out << endl << "Nome: " << p.nome;
    out << endl << "Cognome: " << p.cognome;
    out << endl << "Data di nascita: " << p.nascita.getGiorno() << " / " << p.nascita.getMese() << " / " << p.nascita.getAnno();
    return out;
}

istream& operator>>(istream& in, Persona& p) {
    int n;
    cout << endl << "Inserisci il nome: ";
    in >> p.nome;
    cout << endl << "Inserisci il cognome: ";
    in >> p.cognome;
    cout << endl << "Inserisci la data: ";
    cout << endl << "Inserisci il giorno: ";
    in >> n;
    p.nascita.setGiorno(n);
    cout << endl << "Inserisci il mese: ";
    in >> n;
    p.nascita.setMese(n);
    cout << endl << "Inserisci l'anno: ";
    in >> n;
    p.nascita.setAnno(n);

    return in;
}

bool Persona::operator==(const Persona& p2) {
    if (nome == p2.nome && cognome == p2.cognome && nascita.getGiorno() == p2.nascita.getGiorno() && nascita.getMese() == p2.nascita.getMese() && nascita.getAnno() == p2.nascita.getAnno())
        return true;
    else
        return false;
}

Persona Persona::operator>(const Persona& p) {
    if (conforntoData(nascita, p.nascita) == 1) {
        return *this;
    }

    return p;
}

Persona& Persona::operator=(const Persona& p) {
    nome = p.nome;
    cognome = p.cognome;
    nascita = p.nascita;
    return *this;
}

int etaPers(const Persona p) {
    int anni;
    Data oggi;
    cout << "Inserisci la data di oggi: ";
    oggi.leggiData();
    anni = oggi.getAnno() - p.nascita.getAnno();
    if (p.nascita.getMese() > oggi.getMese() || (p.nascita.getMese() == oggi.getMese() && p.nascita.getGiorno() > oggi.getGiorno() )) {
        anni--;
    }
    return anni;
}