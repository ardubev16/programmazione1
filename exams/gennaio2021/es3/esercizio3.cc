#include <iostream>
#include "pila.h"

using namespace std;

char parseEspressioneBooleanaPrefissa(char espressione [], bool & corretta);

int main() {

    int dimensioneMassima = 100;
    char espressioneBooleana [dimensioneMassima];
    bool corretta = true;
    char risultatoEspressione;

    cout << "Inserisci l'espressione: ";
    cin >> espressioneBooleana;

    risultatoEspressione = parseEspressioneBooleanaPrefissa(espressioneBooleana, corretta);

    if (corretta) {
        cout << "Risultato: " << risultatoEspressione << endl;
    }
    else {
        cout << "Espressione malformata" << endl;
    }

    return 0;
}

bool isBool(char value) {
    return (value == 'F' || value == 'T');
}

void doNot(char& value) {
    value = (value == 'T') ? 'F' : 'T';
}

char c_and(char val1, char val2) {
    char res;
    if (val1 == 'T' && val2 == 'T')
        res = 'T';
    else
        res = 'F';
    return res;
}

char parseEspressioneBooleanaPrefissa(char espressione [], bool & corretta) {
    char val1, val2, op;
    init();
    for (int i=0; espressione[i] != '\0'; i++)
        push(espressione[i]);

    while(!vuota() && corretta) {
        top(val1);
        pop();
        if (!isBool(val1))
            corretta = false;
        else if (top(val2)) { // secondo valore o T/F o !
            pop();
            if (!isBool(val2)) { // caso !
                if (val2 == '!') {
                    doNot(val1);
                    push(val1);
                } else
                    corretta = false;
            } else { // caso T/F
                top(op);
                pop();
                if (op == '&') {
                    val1 = c_and(val1, val2);
                    push(val1);
                } else if (op == '!') {
                    doNot(val2);
                    push(val2);
                    push(val1);
                } else
                    corretta = false;
            }
        } // else operazioni terminate
    }
    deinit();
    return val1;
}
