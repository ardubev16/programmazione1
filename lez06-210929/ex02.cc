// ingresso reale x e intero+ i, calcola serie Somma_i ((-1)^i)/(x^i)

using namespace std;

#include <iostream>

int main() {
    double x;
    unsigned int n;

    cout << "Inserire i valori x e n: ";
    cin >> x >> n;
    
    double somma=0.0, xx=1.0;
    for (unsigned int i=0; i<=n; i++) {
        somma += (i%2 ? -1 : 1) / xx;
        xx *= x;
        cout << somma << endl;
    }
    
    return 0;
}
