#include <iostream>

using namespace std;

int main() {

    int a, b;
    cout << "Inserisci a e b: ";
    cin >> a >> b;

    cout << "|a-b| = " << (a-b) * ((a>b)-(b>a)) << endl;

    return 0;
}
