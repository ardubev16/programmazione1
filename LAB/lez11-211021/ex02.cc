using namespace std;

#include <iostream>


int MCD(int, int);


int main() {
    int a, b;

    cout << "Inserire due numeri: ";
    cin >> a >> b;

    cout << "MCD = " << MCD(a, b) << endl;

    return 0;
}


int MCD(int m, int n) {
    int res;
    if (n == 0)
        res = m;
    else
        res = MCD(n, m%n);

    return res;
}
