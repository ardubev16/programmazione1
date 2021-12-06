using namespace std;

#include <iostream>
#include "pila.h"
#include "coda.h"

bool isPalindrome(char *);

int main() {
    pila_init();
    coda_init();
    char input[101];
    cout << "Inserire una parola: ";
    cin >> input;

    cout << "parola " << (isPalindrome(input) ? "" : "non ") << "palindroma" << endl;

    pila_deinit();
    coda_deinit();

    return 0;
}

bool isPalindrome(char * word) {
    for (int i=0; word[i] != '\0'; i++) {
        pila_push(word[i]);
        coda_enqueue(word[i]);
    }
    int val_pila, val_coda;
    bool palindrome = true;
    while (pila_top(val_pila) && coda_first(val_coda) && palindrome) {
        if (val_pila != val_coda)
            palindrome = false;
        pila_pop();
        coda_dequeue();
    }

    return palindrome;
}
