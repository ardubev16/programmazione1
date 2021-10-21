using namespace std;
#include <iostream>

void divisione(int * risultato, int * resto, int dividendo, int divisore) {
    for (*risultato = 0; dividendo >= divisore; (*risultato)++)
        dividendo -= divisore;
    *resto = dividendo;
}

int divisione_while(int dividendo, int divisore, int * resto) {
    int risultato = 0;
    while (dividendo >= divisore) {
        dividendo -= divisore;
        risultato++;
    }
    *resto = dividendo;

    return risultato;
}

int divisione_rec(int dividendo, int divisore, int & resto) {
    int risultato;
    if (dividendo < divisore) {
        resto = dividendo;
        risultato = 0;
    } else
        risultato = 1 + divisione_rec(dividendo - divisore, divisore, resto);

    return risultato;
}


int main () {
    int dividendo, divisore, risultato, resto;
    cout << "Scrivi due numeri interi e ti dirò risultato della divisione tra loro, e il resto." << endl;
    cin >> dividendo >> divisore;

    divisione (&risultato, &resto, dividendo, divisore);
    cout << "Il risultato  è " << risultato << " e il resto è " << resto << endl;

    cout << "a/b = " << divisione_while(dividendo, divisore, &resto) << ", R = " << resto << endl;
    
    cout << "rec a/b = " << divisione_rec(dividendo, divisore, resto) << ", R = " << resto << endl;

    return 0;
}
