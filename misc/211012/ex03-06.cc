using namespace std;

#include <iostream>


bool isPrime(int);
void print_primeFactors(int);


int main() {
    int a;

    cout << "Inserire un numero: ";
    cin >> a;

    print_primeFactors(a);

    return 0;
}


bool isPrime(int n) {
    bool prime = true;
    if (n > 2)
        for (int i=2; i<=(n/2) && prime; i++)
            prime = (n%i != 0);
    
    return prime;
}

void print_primeFactors(int n) {
    cout << "I fattori primi di " << n << " sono:" << endl;
    for (int i=2; i<=n; i++)
        if (n%i == 0 && isPrime(i))
            cout << i << ", ";
    cout << endl;
}
