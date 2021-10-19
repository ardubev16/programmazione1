using namespace std;

#include <iostream>

int main() {
    int a, b, c;

    cout << "Inserire tre numeri: ";
    cin >> a >> b >> c;

    int tmp = (a > b ? a : b);
    cout << "Il numero maggiore e\' " << (tmp > c ? tmp : c) << endl;

    return 0;
}
