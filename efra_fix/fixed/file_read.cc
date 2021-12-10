/*Scrivere un programma che, dato in input da linea di comando il
nome di un file, ritorni a video il contenuto del suddetto file.
Implementare anche dei controlli che avvisino l’utente in caso il
numero di argomenti sia sbagliato (manca il file di input) oppure
nel caso in cui il file di input non esista */

using namespace std;

#include <iostream>
#include <fstream>

int main (int argc, char *argv[]) {
    fstream input;
    if (argc != 2) {
        cout << "Si prega di usare il formato './a.out <input_file>' " << endl;
        exit(0);
    }

    input.open(argv[1], ios::in);
    if (input.fail()) {
        cout << "Input file not found" << endl;
        exit(0);
    }

    char contenuto[101];
    while (!input.eof()) {
        input >> contenuto;
        cout << contenuto << " ";
    }

    input.close();
    return 0;
}
