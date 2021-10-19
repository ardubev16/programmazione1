using namespace std;

#include <iostream>


int digit_sum(int);


int main() {
    int numero;

    cout << "Inserire un numero: ";
    cin >> numero;

    cout << digit_sum(numero) << endl;

    return 0;
}


int digit_sum(int n) {
    int res = 0;
    while (n != 0) {
        res += n%10;
        n /= 10;
    }

    return res;
}
