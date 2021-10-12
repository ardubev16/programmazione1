using namespace std;

#include <iostream>


void areaCerchio(double, double&);


int main() {
    double area, raggio;

    cout << "Inserire il raggio: ";
    cin >> raggio;

    areaCerchio(raggio, area);
    cout << "L\'area e\' " << area << endl;

    return 0;
}


void areaCerchio(double raggio, double& area) {
    double pi = 3.1415926535;
    area = pi*raggio*raggio;
}
