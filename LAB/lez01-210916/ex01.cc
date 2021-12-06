#include <iostream>

using namespace std;

int main() {
    const float pi = 3.14159;
    float raggio;
    float area, circonferenza;

    cout << "Inserire il raggio del cerchio: ";
    cin >> raggio;

    area = pi * raggio * raggio;
    circonferenza = 2 * pi * raggio;

    cout << "L\'area e\' " << area << endl;
    cout << "La circonferenza e\' " << circonferenza << endl;

    return 0;
}
