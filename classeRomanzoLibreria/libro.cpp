#include <iostream>
#include "libro.h"

using namespace std;

Libro::Libro() {
    ISBN = "0000";
}

Libro::Libro(string ISBN) {
    this->ISBN = ISBN;

    if (this->ISBN == "") {
        this->ISBN = "0000";
    }
}

Libro::~Libro() {}

void Libro::setISBN(string ISBN) {
    this->ISBN = ISBN;

    if (this->ISBN == "") {
        this->ISBN = "0000";
    }
}

void Libro::getISBN() {
    return ISBN;
}