using namespace std;

#include <iostream>


void ruota(int&, int&, int&);
void stampa(int, int, int);

int main() {
    int a, b, c;

    cout << "Inserire a, b, c: ";
    cin >> a >> b >> c;

    stampa(a, b, c);
    ruota(a, b, c);
    cout << "a, b, c ruotati" << endl;
    stampa(a, b, c);

    return 0;
}


void ruota(int& a, int& b, int& c) {
    int tmp = a;
    a = b;
    b = c;
    c = tmp;
}

void stampa(int a, int b, int c) {
    cout << "a = " << a << endl
         << "b = " << b << endl
         << "c = " << c << endl;    
}
