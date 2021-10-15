using namespace std;

#include <iostream>

int main() {
    double a, b;

    cout << "Inserire due numeri reali: ";
    cin >> a >> b;
    
    int ai=(int)a, bi=(int)b;

    cout << "Operazioni con reali:" << endl;
    cout << "a + b = " << (a + b) << endl
         << "a - b = " << (a - b) << endl
         << "a * b = " << (a * b) << endl
         << "a / b = " << (a / b) << endl;

    cout << "Operazioni con interi (a=" << ai << ", b=" << bi << "):" << endl;
    cout << "a + b = " << (ai + bi) << endl
         << "a - b = " << (ai - bi) << endl
         << "a * b = " << (ai * bi) << endl
         << "a / b = " << (ai / bi) << endl;

    return 0;
}
