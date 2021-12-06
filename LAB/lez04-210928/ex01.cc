#include <iostream>

using namespace std;

int main() {

    bool p, q;
    cout << "Inserire P e Q: ";
    cin >> p >> q;

    cout << "P --> Q = " << (!p || q) << endl;

    return 0;
}
