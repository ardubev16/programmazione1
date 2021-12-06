#include <iostream>

using namespace std;

int main() {
    
    double prezzo, iva;

    cout << "Inserire il prezzo e l\'iva: ";
    cin >> prezzo >> iva;

    cout << "Il prezzo totale e\' " << prezzo * (1 + iva / 100) << endl;

    return 0;
}
