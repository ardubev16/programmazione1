using namespace std;

#include <iostream>
#include <fstream>
#include "ex01-fun.h"


int main(int argc, char * argv[]) {
    if (argc != 4) {
        cout << "Usage: ./a.out <input file> <output file> <key>" << endl;
        exit(0);
    }

    fstream input, output;
    char parola[256];
    bool cifrare;

    char mode;
    cout << "Inserire C per cifrare, D per decifrare: ";
    cin >> mode;
    if (mode == 'C')
        cifrare = true;
    else
        cifrare = false;

    input.open(argv[1], ios::in);
    output.open(argv[2], ios::out);

    if (input.fail()) {
        cout << "Errore nell'apertura dell'input" << endl;
        exit(1);
    }

    int chiave = atoi(argv[3]) % 26;
    input >> parola;
    while (!input.eof()) {
        if (cifrare)
            crypt(parola, chiave);
        else
            decrypt(parola, chiave);
        output << parola << " ";
        input >> parola;
    }
    output << endl;

    input.close();
    output.close();

    return 0;
}
