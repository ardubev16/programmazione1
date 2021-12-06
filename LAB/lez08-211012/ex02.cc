using namespace std;
#include <iostream>


void isLower(char, bool *);
void toHigher(char*);


int main() {
    char carattere;

    cout << "Inserire il carattere: ";
    cin >> carattere;
    
    bool lower;
    isLower(carattere, &lower);

    if (lower) {
        toHigher(&carattere);
        cout << carattere << endl;
    }

    return 0;
}


void isLower(char carattere, bool * lower) {
    *lower = (carattere >= 'a' && carattere <= 'z');
}


void toHigher(char* carattere) {
    *carattere -= 'a' - 'A';
} 
