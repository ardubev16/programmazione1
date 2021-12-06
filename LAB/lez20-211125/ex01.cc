using namespace std;

#include <iostream>
#include <fstream>
#include "pila.h"


int main(int argc, char * argv[]) {
    if (argc != 3) {
        cout << "Usage: ./a.out <file_in> <file_out>" << endl;
        exit(0);
    }

    fstream input, output;
    input.open(argv[1], ios::in);
    output.open(argv[2], ios::out);

    if (input.fail() || output.fail()) {
        cout << "Errore file" << endl;
        exit(0);
    }

    init();
    int numero;
    while(input >> numero)
        push(numero);

    while (top(numero)) {
        output << numero << endl;
        pop();
    }

    deinit();
    input.close();
    output.close();

    return 0;
}
