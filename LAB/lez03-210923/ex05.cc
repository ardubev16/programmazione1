#include <iostream>

using namespace std;

int main() {

    int a, b;

    cout << "Inserire due interi: ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
