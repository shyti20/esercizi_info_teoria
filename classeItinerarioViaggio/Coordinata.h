#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate {
    private:
        int gradi;
        int primi;
        int secondi;
        char ptoCardinale;
    public:
        Coordinate();
        Coordinate(int g, int p, int s, char c);
        void setGradi(int g);
        void setPrimi(int p);
        void setSecondi(int s);
        void setCardinale(char c);
        int getGradi();
        int getPrimi();
        int getSecondi();
        char getCardinale();
        void read();
        void write();
};

#endif