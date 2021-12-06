#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double a, b, c;
    double delta, sol1, sol2;
    
    cout << "Inserire i coefficienti dell\'equazione di secondo grado: ";
    cin >> a >> b >> c;

    delta = b*b - 4*a*c;
    sol1 = (-b + sqrt(delta)) / (2 * a);
    sol2 = (-b - sqrt(delta)) / (2 * a);

    cout << "Le soluzioni sono: " << sol1 << " e " << sol2 << endl;

    return 0;
}
