#include <iostream>

using namespace std;

int main() {

    float t_celsius, t_fahrenheit;

    cout << "Inserire la temperatura in Fahrenheit: ";
    cin >> t_fahrenheit;

    t_celsius = (t_fahrenheit - 32) / 1.8;

    cout << "La temperatura in Celsius e\' " << t_celsius << endl;

    return 0;
}
