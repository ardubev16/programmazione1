using namespace std;

#include <iostream>


void tempo(int&, int&, int&);


int main() {
    int ora, min, sec;

    cout << "Inserire ora, minuti e secondi: ";
    cin >> ora >> min >> sec;

    tempo(ora, min, sec);
    cout << "Ora esatta: " << ora << ':' << min << ':' << sec << endl;

    return 0;
}


void tempo(int& h, int& m, int& s) {
    m += s / 60;
    s %= 60;
    h += m / 60;
    m %= 60;
}
