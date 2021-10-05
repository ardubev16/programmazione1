// dato un reale x e intero N, calcolare x^N

using namespace std;

#include <iostream>

int main () {
    double x;
    int N;

    cout << "Inserire x e N tali che x^N: ";
    cin >> x >> N;
    
    int x_pow=1;
    for (int i=0; i<N; i++)
        x_pow *= x;
    cout << x_pow << endl;

    return 0;
}
