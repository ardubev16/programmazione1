// si invoca "stampaAlbero(radice);"

struct nodo {
    int value;
    nodo* right;
    nodo* left;
};
typedef nodo* albero;

albero creaAlbero(char * file);
void inserisciNodo(albero radice, nodo* nuovoNodo);
void stampaAlbero(albero radice, int spazio=0);


albero creaAlbero(char * file) {
    albero radice = NULL;

    fstream input;
    input.open(argv[1], ios::in);

    if (input.fail()) {
        cout << "Errore apertura file" << endl;
    } else {
        int numero;
        input >> new nodo{numero, NULL, NULL};

        while (input >> numero) {
            albero nuovoNodo = new nodo{numero, NULL, NULL};
            inserisciNodo(radice, nuovoNodo);
        }

        input.close();
    }

    return radice;
}

void inserisciNodo(albero radice, nodo* nuovoNodo) {
    if (nuovoNodo->value > radice->value) {
        if (radice->right == NULL)
            radice->right = nuovoNodo;
    }
}

void stampaAlbero(albero radice, int spazio){
    if (radice != NULL) {
        spazio ++;

        stampaAlbero(radice->right, spazio);

        for (int i = 1; i < spazio; i++) {
            cout<<"\t";
        }
        cout<<radice->value<<"\n";

        stampaAlbero(radice->left, spazio);
   }
}
