using namespace std;

#include <iostream>


int inverti(int);


int main() {
    int n;

    cout << "Inserire un numero: ";
    cin >> n;

    n = inverti(n);
    cout << n << endl;

    return 0;
}

int inverti(int numero) {
    int risultato = 0;

    while (numero != 0) {
        risultato *= 10;
        risultato += (numero % 10);

        numero /= 10;
    }
    return risultato;
}
