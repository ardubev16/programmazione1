using namespace std;
#include <iostream>


bool isLower(char);
void toHigher(char&);


int main() {
    char carattere;

    cout << "Inserire il carattere: ";
    cin >> carattere;

    if (isLower(carattere)) {
        toHigher(carattere);
        cout << carattere << endl;
    }

    return 0;
}


bool isLower(char carattere) {
    return (carattere >= 'a' && carattere <= 'z');
}


void toHigher(char& carattere) {
    carattere -= 'a' - 'A';
} 
