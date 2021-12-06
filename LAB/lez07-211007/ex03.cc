using namespace std;

#include <iostream>
#include <cmath>

bool isPrime(int n) {
    bool prime;
    for (int i=2; i<=sqrt(n) && prime; i++)
        prime = (n%i != 0);

    return prime;
}

int main() {
    int n, p1, p2;

    cout << "Inserire un numero: ";
    cin >> n;

    for (int i=1, trovato=0; i<=(n/2) && !trovato; i++) {
        if (isPrime(i) && isPrime(n-i)) {
            p1 = i;
            p2 = n-i;
            trovato = 1;
        }
    }

    cout << n << " = " << p1 << " + " << p2 << endl;

    return 0;
}
