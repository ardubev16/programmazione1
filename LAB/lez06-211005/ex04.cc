using namespace std;

#include <iostream>
#include <cstdlib>

int main() {
    srand(time(NULL));
    int rand_n = rand() % 10 + 1, guess;

    do {
        cout << "Indovina il numero: ";
        cin >> guess;
    } while (guess != rand_n);
    
    cout << "Hai indovinato! Il numero e\' " << rand_n << endl;

    return 0;
}
