#include <iostream>
#include "persona.h"

using namespace std;

int main() {
    Persona p1, p2;
    cin >> p1;
    cin >> p2;
    cout << p1;
    cout << p2;

    cout << etaPers(p2);

    return 0;
}