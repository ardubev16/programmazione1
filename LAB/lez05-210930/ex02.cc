using namespace std;

#include <iostream>

int main() {
    double a, b, c;

    cout << "Inserire 3 numeri reali: ";
    cin >> a >> b >> c;

    if (a < b && a < c)
        cout << a;
    else if (b < c)
        cout << b;
    else
        cout << c;
    
    cout << endl;        

    return 0;
}
