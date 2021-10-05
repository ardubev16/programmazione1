#include <iostream>

using namespace std;

int main() {
    
    // Dati in input due numeri, dividendo e divisore, calcola il quoziente e resto dell'operazione di divisione.

    int dividendo, divisore, quoziente, resto;

    cout << "Inserire il dividendo: ";
    cin >> dividendo;
    cout << "Inserire il divisore: ";
    cin >> divisore;

    quoziente = dividendo / divisore;
    resto = dividendo % divisore;

    cout << "Il risultato della divisione e\' " << quoziente << " con resto " << resto << endl;

    return 0;
}
