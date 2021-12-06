using namespace std;

#include <iostream>


int potenza(int, int);


int main() {
    int b, e;

    cout << "Inserire base e esponente: ";
    cin >> b >> e;

    cout << b << " ^ " << e << " = " << potenza(b, e) << endl;

    return 0;
}


int potenza(int base, int esponente) {
    int res;
    if (esponente == 0)
        res = 1;
    else
        res = base * potenza(base, esponente - 1);

    return res;    
}
