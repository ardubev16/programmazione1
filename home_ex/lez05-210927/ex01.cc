using namespace std;

#include <iostream>
#include <cmath>

int main() {
    
    int a, b, c;
    
    cout << "Inserire i coefficienti a, b, c dell\'equazione di secondo grado ax^2+bx+c=0: ";
    cin >> a >> b >> c;

    if (!a) {
        if (!b) {
            if (!c)
                cout << "L\'equazione e\' vera per ogni x";
            else
                cout << "Non esiste soluzione";
        } else
            cout << "La soluzione e\': x = " << (-c / b);
    } else {
        int delta = b*b - 4*a*c;

        if (delta > 0) {
            cout << "Le soluzioni sono: x1 = " << ((-b + sqrt(delta)) / (2*a)) << endl;
            cout << "                   x2 = " << ((-b - sqrt(delta)) / (2*a));
        } else if (delta == 0)
            cout << "La soluzione e\': x = " << (-b / (2*a));
        else
            cout << "Non esistono soluzioni reali (delta < 0)";
    }
    cout << endl;

    return 0;
}
