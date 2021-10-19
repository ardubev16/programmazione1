using namespace std;

#include <iostream>

int main() {
    int mese;

    cout << "Inserire un numero (1-12): ";
    cin >> mese;

    switch (mese) {
        case 1: cout << "Gennaio"; break;
        case 2: cout << "Febbraio"; break;
        case 3: cout << "Marzo"; break;
        case 4: cout << "Aprile"; break;
        case 5: cout << "Maggio"; break;
        case 6: cout << "Giugno"; break;
        case 7: cout << "Luglio"; break;
        case 8: cout << "Agosto"; break;
        case 9: cout << "Settembre"; break;
        case 10: cout << "Ottobre"; break;
        case 11: cout << "Novembre"; break;
        case 12: cout << "Dicembre"; break;
        default: cout << "Numero errato!"; break;
    }
    cout << endl;

    return 0;
}
