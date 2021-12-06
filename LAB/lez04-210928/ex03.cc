#include <iostream>

using namespace std;

int main() {
    
    int a, b;
    cout << "Inserire a e b: ";
    cin >> a >> b;

    int massimo = ((a >= b) * a) + ((b > a) * b);
    int minimo = a + b - massimo;

    cout << "Il numero massimo e\' " << massimo << " e il minimo " << minimo << endl;

    return 0;
}
