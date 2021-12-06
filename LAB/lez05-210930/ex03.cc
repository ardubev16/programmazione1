using namespace std;

#include <iostream>

int main() {
    double a, b, c;

    cout << "Inserire 3 numeri reali (b <= c): ";
    cin >> a >> b >> c;

    if (b <= a && a <= c)
        cout << -1;
    else if (a < b)
        cout << 1;
    else
        cout << 0;

    cout << endl;

    return 0;
}
