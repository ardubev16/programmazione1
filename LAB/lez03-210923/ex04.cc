#include <iostream>

using namespace std;

int main() {

    char carattere;

    cout << "Inserire il carattere minuscolo: ";
    cin >> carattere;

    carattere -= 'a' - 'A';

    cout << "Carattere maiuscolo: " << carattere << endl;

    return 0;
}
