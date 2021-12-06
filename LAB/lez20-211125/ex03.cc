//TODO: sistema print e remove_person

using namespace std;

#include <iostream>
#include <cstring>
#include "coda.h"

void add_person();
void remove_person();

int main() {
    int scelta;
    init();
    do {
        cout << "Scegliere l'opzione:" << endl
             << "\t(1) Aggiungi persona" << endl
             << "\t(2) Smaltisci persona" << endl
             << "\t(3) Stampa situazione corrente" << endl
             << "\t(0) ESCI" << endl;
        cin >> scelta;

        switch (scelta) {
            case 0: break;
            case 1: add_person(); break;
            case 2: remove_person(); break;
            case 3: print(); break;
            default: cout << "Opzione errata" << endl;
        }
    } while (scelta != 0);

    deinit();
    return 0;
}

void add_person() {
    char* persona = new char[25];
    cout << "Inserire una persona: ";
    cin >> persona;
    enqueue(persona);
    cout << "E' stato inserito " << persona << endl;
    delete persona;
}

void remove_person() {
    char* persona = new char[25];
    first(persona);
    dequeue();
    cout << "E' stato rimosso " << persona << endl;
    delete persona;
}
