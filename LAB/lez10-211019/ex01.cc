using namespace std;

#include <iostream>


int fact(int);


int main() {
    int n;

    cout << "Inserire un numero: ";
    cin >> n;

    cout << n << "! = " << fact(n) << endl;

    return 0;
}


int fact(int n) {
    int res;
    if (n == 0)
        res = 1;
    else
        res = n * fact(n - 1);

    return res;
}
