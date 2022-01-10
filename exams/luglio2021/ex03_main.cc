#include <iostream>
#include "ex03_albero.h"

using namespace std;

int main() {
    char res;
    Albero albero;
    coppia val;
    inizializza(albero);
    do {
        cout << "\nOperazioni possibili:\n"
        << " Inserimento (i)\n"
        << " Ricerca (r)\n"
        << " Stampa ordinata (s)\n"
        << " Fine (f)\n";
        cout << "Operazione selezionata: ";
        cin >> res;
        switch (res) {
            case 'i':
                cout << "Coppia di valori : " << endl;
                val = leggi_coppia();
                if (inserisci(albero, val) == FALSO) {
                    cout << "Valore gia‘ presente!" << endl;
                }
                break;
            case 'r':
                cout << "Coppia di valori: " << endl;
                val = leggi_coppia();
                if (cerca(albero, val) == VERO) {
                    cout << "Valore presente: ";
                    stampa_coppia(val);
                    cout << endl;
                } else {
                    cout << "Valore non presente" << endl;
                }
                break;
            case 's':
                if (vuoto(albero) == VERO) {
                    cout << "Albero vuoto!" << endl;
                } else {
                    stampa(albero);
                }
                break;
            case 'f':
                break;
            default:
                cout << "Opzione errata\n";
            }
        } while (res != 'f');
    return 0;
}
