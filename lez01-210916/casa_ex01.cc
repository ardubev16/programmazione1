#include <iostream>

using namespace std;

int main() {
    
    // Dato in input il raggio di un cerchio, calcola il volume della sfera corrispondente.

    float raggio, volume;
    const float pi = 3.14159;

    cout << "Inserire il raggio della sfera: ";
    cin >> raggio;
    
    volume = (4 * pi * (raggio * raggio * raggio)) / 3;
    cout << "Il volume della sfera e\' " << volume << endl;

    return 0;
}
