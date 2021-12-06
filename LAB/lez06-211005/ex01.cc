using namespace std;

#include <iostream>

int main() {
    int n;
    long fib1=0, fib2=1;

    cout << "Inserire quanti numeri della sequenza di fibonacci stampare: ";
    cin >> n;

    for (int i=0; i<n; i++) {
        cout << "F_" << i+1 << " = " << fib1 << endl;
        fib1 += fib2;
        fib2 = fib1 - fib2;
    }

    return 0;
}
