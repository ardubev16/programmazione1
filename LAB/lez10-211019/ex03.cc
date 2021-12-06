using namespace std;

#include <iostream>


void dectobin(int);


int main() {
    int n;

    cout << "Inserire un numero: ";
    cin >> n;

    dectobin(n);
    cout << endl;

    return 0;
}


void dectobin(int n) {
    if (n > 1)
        dectobin(n / 2);

    cout << n % 2;
}
