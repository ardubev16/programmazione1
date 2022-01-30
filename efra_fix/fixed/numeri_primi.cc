using namespace std;
#include <iostream>

bool isPrime(int);

int main() {
    int num_primo1 = 0;
    int num_primo2 = 0;
    int numero;
    
    do {
        cout << "Dimmi un numero per sapere da che numeri primi é formato  (il numero deve essere > 1): " << endl;
        cin >> numero;
    } while (numero <=1);

    for (int i=2; i<=numero && num_primo1 == 0; i++)
        if (isPrime(i) && isPrime(numero - i)) {
            num_primo1 = i;
            num_primo2 = numero - i;
        }

    if (num_primo1)
        cout << numero << " è la somma di " << num_primo1 << "+" << num_primo2 << endl;
    else 
        cout << "Problema!" << endl;

    return 0;
}


bool isPrime(int numero) {
    bool prime = true;
    if (numero > 2)
        for (int i=2; i<numero && prime; i++)
            prime = (numero%i != 0);

    return prime;
}
