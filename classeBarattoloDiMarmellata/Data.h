#ifndef DATA_H
#define DATA_H
#include <iostream>

using namespace std;

class Data {
    private:
        int giorno;
        int mese;
        int anno;
    public:
        Data();
        void setGiorno(int giorno);
        void setMese(int mese);
        void setAnno(int anno);
};

#endif