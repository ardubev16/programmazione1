using namespace std;

#include <iostream>

int main() {
    int n;
    cout << "Inserire il numero del giorno della settimana: ";
    cin >> n;
    
    switch (n) {
        case 1: cout << "Lunedi\'"; break;
        case 2: cout << "Martedi\'"; break;
        case 3: cout << "Mercoledi\'"; break;
        case 4: cout << "Giovedi\'"; break;
        case 5: cout << "Venerdi\'"; break;
        case 6: cout << "Sabato"; break;
        case 7: cout << "Domenica"; break;
        default: cout << "Inserire un giorno valido";
    }
    cout << endl;

    return 0;
}
