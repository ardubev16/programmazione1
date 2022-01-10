#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo {
    int value;
    nodo* left;
    nodo* right;
};
typedef nodo* albero;


albero generaAlbero(int numeroDiNodi = 10);
void stampaAlbero(albero radice, int spazio=0);
// dichiarazioni
albero creaAlberoDiRicercaBinario(albero);
void stampaAlberoInOrdine(albero);
void deallocaAlbero(albero);
// aux
void creaAlberoDiRicercaBinario_aux(albero, albero);
void inserisciNodo(albero, int);
albero newNodo(int);


int main(int argc, char* argv[]) {

    // Se modificate la funzione "main", ricordarsi poi di ripristinare il codice originale


    albero alberoIniziale = generaAlbero();
    //stampaAlbero(alberoIniziale); // nel caso in cui possa essere utile, la funzione "stampaAlbero" stampa graficamente l'albero a video

    albero alberoBinario = creaAlberoDiRicercaBinario(alberoIniziale);
    cout << "L'albero di ricerca binario è: ";
    stampaAlberoInOrdine(alberoBinario);
    cout << endl;

    deallocaAlbero(alberoIniziale);
    deallocaAlbero(alberoBinario);

    return 0;
}


albero generaAlbero(int numeroDiNodi) {

    // Se modificate la funzione "generaAlbero", ricordarsi poi di ripristinare il codice originale

    srand(time(NULL));
    nodo* nodi[numeroDiNodi];

    cout << "L'albero iniziale è:";

    for (int i = 0; i<numeroDiNodi; i++) {
        nodi[i] = new nodo;
        nodi[i]->value = rand() % 10;
        nodi[i]->left = NULL;
        nodi[i]->right = NULL;
        cout << " " << nodi[i]->value;
    }
    cout << endl;

    for (int i = 0; (2*i + 1)<numeroDiNodi; i++) {
        nodi[i]->left = nodi[2*i + 1];
        if ((2*i + 2) < numeroDiNodi) {
            nodi[i]->right = nodi[(2*i + 2)];
        }
    }

    return nodi[0];
}

void stampaAlbero(albero radice, int spazio) {

    // Se modificate la funzione "stampaAlbero", ricordarsi poi di ripristinare il codice originale

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


/*
 * Inserire qui la definizione di "creaAlberoDiRicercaBinario", "StampaAlberoInOrdine",
 * "deallocaAlbero" e di eventuali altre funzioni ausiliarie.
 */

void stampaAlberoInOrdine(albero radice) {
    if (radice != NULL) {
        stampaAlberoInOrdine(radice->left);
        cout << radice->value << ' ';
        stampaAlberoInOrdine(radice->right);
    }
}

void deallocaAlbero(albero radice) {
    if (radice != NULL) {
        deallocaAlbero(radice->left);
        deallocaAlbero(radice->right);
        delete radice;
    }
}

albero creaAlberoDiRicercaBinario(albero radice) {
    albero new_radice = newNodo(radice->value);
    creaAlberoDiRicercaBinario_aux(radice->left, new_radice);
    creaAlberoDiRicercaBinario_aux(radice->right, new_radice);
    return new_radice;
}

void creaAlberoDiRicercaBinario_aux(albero radice, albero radice_new) {
    if (radice != NULL) {
        if ((radice->value)%2 == 1)
            inserisciNodo(radice_new, radice->value);
        creaAlberoDiRicercaBinario_aux(radice->left, radice_new);
        creaAlberoDiRicercaBinario_aux(radice->right, radice_new);
    }
}

void inserisciNodo(albero radice, int value) {
    if (value < radice->value) {
        if (radice->left == NULL)
            radice->left = newNodo(value);
        else
            inserisciNodo(radice->left, value);
    } else {
        if (radice->right == NULL)
            radice->right = newNodo(value);
        else
            inserisciNodo(radice->right, value);
    }
}

albero newNodo(int value) {
    albero radice = new (nothrow) nodo;
    if (radice != NULL) {
        radice->value = value;
        radice->left = NULL;
        radice->right = NULL;
    }
    return radice;
}

