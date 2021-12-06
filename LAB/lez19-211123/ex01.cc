using namespace std;

#include <iostream>
#include <fstream>

struct nodo {
    int value;
    nodo* next;
};

void list_append(nodo*&, int);
void list_dealloc(nodo*);
void list_print(nodo*);
void list_print_inverted(nodo*);
nodo* crea_lista(char*);


int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Usage: ./a.out <file>" << endl;
        exit(0);
    }

    nodo* listaNumeri = crea_lista(argv[1]);
    list_print(listaNumeri);

    list_dealloc(listaNumeri);

    return 0;
}


void list_append(nodo*& p, int number) {
    nodo* q;
    if (p == NULL) {
        p = new nodo;
        q = p;
    } else {
        p->next = new nodo;
        q = p->next;
    }
    q->value = number;
    q->next = NULL;
}

nodo* crea_lista(char* inputFile) {
    nodo* lista = NULL;
    fstream input;
    input.open(inputFile, ios::in);
    if (input.fail()) {
        cout << "Errore nell'apertura dell'input" << endl;
    } else {
        int number;
        // input >> tmp;
        // nodo* lista = new nodo{atoi(tmp), NULL};
        // nodo* nodo_next = lista;

        while (input >> number) {
            list_append(lista, number);
        }

        input.close();
    }
    return lista;
}

void list_print(nodo* lista) {
    while (lista != NULL) {
        cout << lista->value << ' ';
        lista = lista->next;
    }
    cout << endl;
}

void list_print_inverted(nodo* lista) {
    if (lista != NULL)
        list_print_inverted(list->next);
    cout << lista->value;
}

void list_dealloc(nodo* lista) {
    nodo* p;
    while (lista != NULL) {
        p = lista->next;
        delete lista;
        lista = p;
    }
}
