#include <iostream>
#include "data.h"

using namespace std;

Data::Data() {
    giorno = 1;
    mese = 1;
    anno = 1900;
}

Data::Data(int g, int m, int a) {
    giorno = g;
    mese = m;
    anno = a;
    if (g <= 0 || g > 31 && m <= 0 || m > 12 && a < 1900) {
        giorno = 1;
        mese = 1;
        anno = 1900;
    }
}

Data::~Data() {

}

void Data::setGiorno(int g) {
    giorno = g;
    if (g <= 0 || g > 31) {
        giorno = 1;
    }
}

void Data::setMese(int m) {
    mese = m;
    if (m <= 0 || m> 12) {
        mese = 1;
    }
}

void Data::setAnno(int a) {
    anno = a;
    if (a <= 1900) {
        anno = 1900;
    }
}

void Data::setData(int g, int m, int a) {
    giorno = g;
    mese = m;
    anno = a;
    if (g <= 0 || g > 31 && m <= 0 || m > 12 && a < 1900) {
        giorno = 1;
        mese = 1;
        anno = 1900;
    }
}

int Data::getGiorno() const {
    return giorno;
}

int Data::getMese() const{
    return mese;
}

int Data::getAnno() const{
    return anno;
}

void Data::leggiData() {
    do {
        cout << endl << "Inserisci il giorno: ";
        cin >> giorno;
    } while (giorno <= 0 || giorno > 31);

    do {
        cout << endl << "Inserisci il mese: ";
        cin >> mese;
    } while (mese <= 0 || mese > 12);

    do {
        cout << endl << "Inserisci l'anno: ";
        cin >> anno;
    } while (anno < 1900);
}

void Data::stampaData() {
    cout << endl << "Data: " << giorno << "/" << mese << "/" << anno;
}

bool Data::valData(Data d1) {
    bool flag;
    int giornoMese = 31;

    if ((d1.anno % 4 == 0 && d1.anno % 100 != 0) || (d1.anno % 400 == 0)) {
        flag = true;
    }

    if (d1.anno < 1900 || d1.mese <= 0 || d1.giorno <= 0) {
        flag = false;
    }

    if (d1.mese == 4 || d1.mese == 6 || d1.mese == 9 || d1.mese == 11) {
        giornoMese = 30;
    } else if (d1.mese == 2) {
        if (flag) {
            giornoMese = 29;
        } else {
            giornoMese = 28;
        }
    }

    if (d1.giorno <= giornoMese) {
        flag = false;
    }

    return flag;
}

int conforntoData(const Data& d1, const Data& d2) {
    int flag;

    if (d1.anno == d2.anno && d1.mese == d2.mese && d1.giorno == d2.giorno) {
        flag = 0;
    } else if (d1.anno < d2.anno || (d1.anno == d2.anno  && d1.mese < d2.mese) || (d1.anno== d2.anno && d1.mese  == d2.mese && d1.giorno  < d2.giorno )){
        flag = -1;
    } else {
        flag = 1;
    }

    return flag;
}