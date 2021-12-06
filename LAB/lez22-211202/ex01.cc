using namespace std;

#include <iostream>
#include <fstream>

struct nodo {
    int value;
    nodo* right;
    nodo* left;
};
typedef nodo* albero;


albero creaAlbero(char * file);
void inserisciNodo(albero radice, nodo* nuovoNodo);
void stampaAlbero(albero radice, int spazio=0);


int main(int argc, char * argv[]) {
    if (argc != 2) {
        cout << "Usage: ./a.out <file>" << endl;
        exit(0);
    }

    fstream input;
    input.open(argv[1], ios::in);

    if (input.fail()) {
        cout << "Errore apertura file" << endl;
        exit(0);
    }



    return 0;
}
