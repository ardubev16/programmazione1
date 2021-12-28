using namespace std;

#include <iostream>

int main() {
    double a, b, c;

    cout << "Inserire i lati del triangolo: ";
    cin >> a >> b >> c;

    if (a != b && b != c && a != c)
        cout << "Triangolo scaleno";
    else if (a == b && b == c)
        cout << "Triangolo equilatero";
    else
        cout << "Triangolo isoscele";
    cout << endl;

    return 0;
}
