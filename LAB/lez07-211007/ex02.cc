using namespace std;

#include <iostream>

int main() {
    
    int a, b;

    do {
        cout << "Inserisci l'intervallo di valori [32-126]: ";
        cin >> a >> b;
    } while (!(a>=32 && b<=126 && a<=b));

    for (int i=a; i<=b; i++)
        cout << (char)i << endl;

    return 0;
}
