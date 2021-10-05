#include <iostream>

using namespace std;

int main() {
    
    // Stampa a video la tabella di verita' dell'operatore AND (&&) e OR (||).

    cout << "Tabella di verita\' dell\'operatore AND:" << endl;
    cout << "_______________" << endl;
    cout << "| A | B | AND |" << endl;
    cout << "|-------------|" << endl;
    cout << "| 0 | 0 |  0  |" << endl;
    cout << "| 0 | 1 |  0  |" << endl;
    cout << "| 1 | 0 |  0  |" << endl;
    cout << "| 1 | 1 |  1  |" << endl;
    cout << "|_____________|" << endl;

    cout << endl;

    cout << "Tabella di verita\' dell\'operatore OR:" << endl;
    cout << "_______________" << endl;
    cout << "| A | B |  OR |" << endl;
    cout << "|-------------|" << endl;
    cout << "| 0 | 0 |  0  |" << endl;
    cout << "| 0 | 1 |  1  |" << endl;
    cout << "| 1 | 0 |  1  |" << endl;
    cout << "| 1 | 1 |  1  |" << endl;
    cout << "|_____________|" << endl;



    return 0;
}
