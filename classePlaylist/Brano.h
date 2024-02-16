#ifndef BRANO_H
#define BRANO_H
#include <iostream>

using namespace std;

class Brano {
    private:
        string titolo;
        int durata;
        int punt;
    public:
        Brano();
        Brano(string t, int d, int p);
        string getTitolo();
        int getDurata();
        int getPunt();
        void setTitolo(string t);
        void setDurata(int d);
        void setPunt(int p);
        void setAll(string t, int d, int p);
    friend ostream& operator<<(ostream& out, Brano& newBrano);
    friend istream& operator>>(istream& in, Brano& newBrano); 
};

#endif