#include <iostream>

using namespace std;

int main() {

    char carattere;

    cout << "Inserire un carattere: ";
    cin >> carattere;

    carattere += 10;
    cout << "Il carattere ASCII + 10 e\' " << carattere << endl;

    return 0;
}
