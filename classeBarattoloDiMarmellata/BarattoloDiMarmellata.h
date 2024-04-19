#ifndef BARATTOLODIMARMELLATA_H
#define BARATTOLODIMARMELLATA_H
#include <iostream>
#include "Data.h"

using namespace std;

class BarattoloDiMarmellata {
    private:
        Data scadenza;
        int code;
        string nome;
        Data arrivo;
        float prezzo;
    private:
        BarattoloDiMarmellata();
        BarattoloDiMarmellata(Data scadenza, int code, string nome, Data arrivo, float prezzo);
        ~BarattoloDiMarmellata();
        void setNome(string nome);
        void setCode(int code);
        void setScadenza(Data scadenza);
        void setArrivo(Data arrivo);
        void setPrezzo(float prezzo);
        string getNome();
        int getCode();
        Data getScadenza();
        Data getArrivo();
        float getPrezzo();
};

#endif