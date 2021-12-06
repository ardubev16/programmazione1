using namespace std;

#include <iostream>

int main() {
    char a;

    cout << "Inserire una lettera: ";
    cin >> a;
    
    a = ((a >= 'a' || a <= 'z') ? a : (a + 'a' - 'A'));

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        cout << "Il carattere e\' una vocale";
    else
        cout << "Il carattere e\' una consonante";

    cout << endl;

    return 0;
}
