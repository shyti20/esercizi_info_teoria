#ifndef DATE_H
#define DATE_H
#include <iostream>

using namespace std;

class Date {
    private:
        int giorno;
        int mese;
        int anno;
    public:
        Date();
        Date(int giorno, int mese, int anno);
        Date(Date& date);
        void setGiorno(int giorno);
        void setMese(int mese);
        void setAnno(int anno);
        int getGiorno();
        int getMese();
        int getAnno();
};
#endif