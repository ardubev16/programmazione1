using namespace std;

#include <iostream>
#include <cmath>

int main() {
    
    double a, b, c;
    
    cout << "Inserire i coefficienti a, b, c dell\'equazione di secondo grado: ";
    cin >> a >> b >> c;
    
    double delta = b*b - 4*a*c;
    if (a) {
        if (delta > 0) {
            cout << "Le soluzioni sono: x1 = " << ((-b + sqrt(delta)) / (2*a)) << endl;
            cout << "                   x2 = " << ((-b - sqrt(delta)) / (2*a)) << endl;
        } else if (delta == 0)
            cout << "La soluzione e\': x = " << ((-b + sqrt(delta)) / (2*a)) << endl;
        else
            cout << "Non esistono soluzioni reali (delta < 0)" << endl;
    } else
        cout << "La soluzione e\': x = " << (-c / b) << endl;

    return 0;
}
