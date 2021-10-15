using namespace std;

#include <iostream>

int main() {
    const double sqrt3 = 1.73205;
    double lato, perimetro, area;

    cout << "Inserire il lato dell\'esagono: ";
    cin >> lato;

    perimetro = 6*lato;
    area = (3.0/2.0)*sqrt3*(lato*lato);

    cout << "Perimetro esagono = " << perimetro << endl
         << "Area esagono = " << area << endl;

    return 0;
}
