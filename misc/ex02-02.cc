using namespace std;

#include <iostream>

int main() {
    double temperature;

    cout << "Inserire una temperatura in Celsius: ";
    cin >> temperature;

    if (temperature < -273.15)
        cout << "Temperatura impossibile!";
    else if (-273.15 <= temperature && temperature <= 0)
        cout << "Fa freddo!";
    else if (0 < temperature && temperature <= 18.0)
        cout << "Temperatura cosi\' cosi\'";
    else if (18.0 < temperature && temperature <= 30.0)
        cout << "Temperatura accettabile";
    else
        cout << "Fa caldo!";
    cout << endl;

    return 0;
}
