using namespace std;

#include <iostream>


bool apCircle(double, double&, double&);


int main() {
    double raggio, area, perimetro;

    do {
        cout << "Inserire il raggio: ";
        cin >> raggio;
    } while (!apCircle(raggio, area, perimetro));
    
    cout << "perimetro = " << perimetro << ", area = " << area << endl;

    return 0;
}


bool apCircle(double radius, double& area, double& perimeter) {
    bool success;
    double pi = 3.1415926535;
    if (radius >= 0) {
        success = true;
        area = pi*radius*radius;
        perimeter = 2*pi*radius;
    } else
        success = false;

    return success;
}
