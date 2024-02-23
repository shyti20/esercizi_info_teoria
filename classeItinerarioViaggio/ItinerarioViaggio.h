#ifndef ITINERARIOVIAGGIO_H
#define ITINERARIOVIAGGIO_H

#include "Node.h"I

class ItinerarioViaggio {
    private:
        Node* head;
    public:
        ItinerarioViaggio();
        ItinerarioViaggio(Tappa newTappa);
        ItinerarioViaggio(const ItinerarioViaggio& ite);
        ~ItinerarioViaggio();
        bool insertHead(Tappa newTappa);
        void prossTappa();
        bool removeTappa();
        ItinerarioViaggio& operator-(string n);
};
#endif