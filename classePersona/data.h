/*Rappresentare con un diagramma UML e implementare la classe Data, dove per data s’intende una qualsiasi data del calendario gregoriano, cioè a partire dal 15 ottobre 1582. Implementare i seguenti metodi:
- costruttore di default, costruttore con parametri, distruttore;
- metodi per l’accesso in lettura e scrittura agli attributi privati;
- un metodo per la stampa a video di una data nel formato gg/mm/aaaa;
- un metodo per leggere in input una data valida appartenente al calendario gregoriano;
- un metodo per validare una data, che restituisca 0 se la data non è accettabile. (Le date accettabili sono quelle che rispettano le regole del calendario gregoriano. In particolare, si ricorda che il 29 febbraio è accettabile solo in corrispondenza di un anno bisestile, cioè un anno il cui numero è divisibile per 4, eccetto gli anni divisibili per 100 ma non per 400.)
- una funzione friend che confronti due date e restituisca un intero che indica quale data è antecedente (0 se le date sono uguali).*/
#ifndef DATA_H
#define DATA_H

class Data {
    private:
        int giorno;
        int mese;
        int anno;
    public:
        Data();
        Data(int g, int m, int a);
        ~Data();
        void setGiorno(int g);
        void setMese(int m);
        void setAnno(int a);
        void setData(int g, int m, int a);
        int getGiorno() const;
        int getMese() const;
        int getAnno() const;
        void leggiData();
        void stampaData();
        bool valData(Data d1);
    friend int conforntoData(const Data& d1, const Data& d2);

};

#endif