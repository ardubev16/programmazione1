using namespace std;

#include <iostream>


double pow2(int);


int main() {
    int n;
    double somma=0;

    cout << "Inserire il valore di n: ";
    cin >> n;

    for (int i=0; i<=n; i++)
        somma += 1.0/pow2(i);

    cout << somma << endl;

    return 0;
}


double pow2(int exponent) {
    double result = 1;
    for (int i=0; i<exponent; i++)
        result *= 2;

    return result;
}
