using namespace std;
#include <iostream>

int divisione (int risultato, int *resto, int dividendo, int divisore) {
    int dividendo2;
    for (risultato = 0; dividendo >= divisore; risultato++) {
        dividendo2 = dividendo - divisore;
        dividendo = dividendo2;
    }
    if (dividendo < divisore) {
        dividendo = *resto;
    }
    return risultato;
}

int main () {
    int dividendo, divisore, risultato, resto;
    cout << "Scrivi due numeri interi e ti dirò risultato della divisione tra loro, e il resto." << endl;
    cin >> dividendo;
    cin >> divisore;

    divisione (risultato, &resto, dividendo, divisore);
    
    cout << "Il risultato  è " << risultato << " e il resto è " << resto << endl;
    return 0;
}
