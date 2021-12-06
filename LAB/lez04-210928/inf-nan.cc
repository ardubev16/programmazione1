#include <iostream>

using namespace std;

int main() {

    cout << 1.0/0.0 << endl;        // inf
    cout << -1.0/0.0 << endl;       // -inf
    cout << 0.0/0.0 << endl;        // -nan

    return 0;
}
