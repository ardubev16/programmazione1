using namespace std;
#include <iostream>


int op_potenza(int base, int esponente) {
    int res;
    if (esponente == 0)
        res = 1;
    else
        res = base * op_potenza(base, esponente - 1);

    return res;
}

int op_potenza_impl(int base, int esponente) {
    int res = 1;
    if (esponente != 0)
        res = base * op_potenza_impl(base, esponente - 1);

    return res;
}

int op_potenza_tr(int base, int esponente, int potenza =1) {
    int res;

    if (esponente == 0)
        res = potenza;
    else
        res = op_potenza_tr(base, esponente-1, potenza*base);
    
    return res;
}


int main ()  {
    int base, esponente;

    cout << "Dammi due valori interi > 0, il primo sarà la base della potenza, il secondo l'esponente" << endl;
    cin >> base >> esponente;

    cout << "La potenza che cercavi è " << op_potenza_tr(base, esponente) << endl;

    return 0;
}
