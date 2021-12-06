using namespace std;

#include <iostream>
#include <fstream>
#include "pila.h"


int main(int argc, char * argv[]) {
    if (argc != 2) {
        cout << "Usage: ./a.out <file_in>" << endl;
        exit(0);
    }

    fstream input;
    input.open(argv[1], ios::in);

    if (input.fail()) {
        cout << "Errore file" << endl;
        exit(0);
    }

    init();
    char caratteri[101];
    bool bilanciato = true;
    input >> caratteri;

    for (int i=0; caratteri[i] != '\0' && bilanciato; i++) {
        if (caratteri[i] == '(')
            push(caratteri[i]);
        else if (caratteri[i] == ')' && !pop())
            bilanciato = false;
    }
    cout << (bilanciato ? "Sequenza bilanciata" : "Sequenza non bilanciata") << endl;

    deinit();
    input.close();

    return 0;
}
