using namespace std;

#include <iostream>

int main() {
    char risposta;
    int numero;

    cout << "Pensa a un numero tra 0 e 7" << endl;

    cout << "E\' un numero pari? (y/n): ";
    cin >> risposta;
    if (risposta == 'y') {
        // 0, 2, 4, 6
        cout << "Il numero e\' <= 2? (y/n): ";
        cin >> risposta;
        if (risposta == 'y') {
            // 0, 2
            cout << "Il numero e\' 0? (y/n): ";
            cin >> risposta;
            if (risposta == 'y')
                numero = 0;
            else
                numero = 2;
        } else {
            // 4, 6
            cout << "Il numero e\' 4? (y/n): ";
            cin >> risposta;
            if (risposta == 'y')
                numero = 4;
            else
                numero = 6;
        }
    } else {
        // 1, 3, 5, 7
        cout << "Il numero e\' <= 3? (y/n): ";
        cin >> risposta;
        if (risposta == 'y') {
            // 1, 3
            cout << "Il numero e\' 1? (y/n): ";
            cin >> risposta;
            if (risposta == 'y')
                numero = 1;
            else
                numero = 3;
        } else {
            // 5, 7
            cout << "Il numero e\' 5? (y/n): ";
            cin >> risposta;
            if (risposta == 'y')
                numero = 5;
            else
                numero = 7;
        }
    }
    cout << "Il numero che hai in mente e\' " << numero << endl;

    return 0;
}
