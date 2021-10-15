using namespace std;

#include <iostream>

int main() {
    double miglia;

    cout << "Inserire la distanza in miglia: ";
    cin >> miglia;

    cout << "La distanza in km e\': " << (miglia / 0.62137) << endl;

    return 0;
}
