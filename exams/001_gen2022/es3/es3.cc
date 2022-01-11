#include <iostream>
#include <fstream>

using namespace std;

struct nodo {
    char value;
    nodo* left;
    nodo* right;
};
typedef nodo* albero;


void stampaAlbero(albero radice, int spazio=0);

void bubble_sort(char*, int);
albero crea_bst(char*, int, int);
void deinit(albero);


int main() {
    char filename[31];
    cout << "Inserisci il file: ";
    cin >> filename;

    fstream input;
    input.open(filename, ios::in);
    if (input.fail()) {
        cout << "Input error!" << endl;
        exit(0);
    }

    char lettere[26];
    int cnt = 0;
    while(input >> lettere[cnt])
        cnt++;
    input.close(); // mancava

    bubble_sort(lettere, cnt);
    albero tree = crea_bst(lettere, 0, cnt);
    stampaAlbero(tree);

    deinit(tree);
    return 0;
}


/** Stampa dell'albero */
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

void bubble_sort(char* arr, int len) {
    for (int i=len-1; i>0; i--)
        for (int j=0; j<i; j++)
            if (arr[j] > arr[j+1]) {
                char tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
}

// indici start, end, calcola media
albero crea_bst(char* arr, int start, int end) {
    albero radice = NULL;
    int media = (end+start)/2;
    if (end > start) {
        radice = new (nothrow) nodo; // aggiunto (nothrow)
        radice->value = arr[media];
        radice->left = crea_bst(arr, start, media);
        radice->right = crea_bst(arr, media+1, end);
    }
    return radice;
}


void deinit(albero radice) {
    if (radice != NULL) {
        deinit(radice->right);
        deinit(radice->left);
        delete radice;
    }
}
