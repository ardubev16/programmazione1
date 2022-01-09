#include <iostream>
#include "pila.h"


using namespace std;


/**
 * Ricordare che il file "pila.h" contiene la definizione della struct "cella" (qui sotto riportata)
 *
 * struct cella {
 *   int indiceRiga;
 *   int indiceColonna;
 * };
 */
void risolviLabirinto(int [][5], int, int);


int main(int argc, char* argv[]) {

    // Se modificate la funzione "main", ricordarsi poi di ripristinare il codice originale

    // E' possibile modificare la matrice per effettuare dei test
    int labirinto[5][5] = {
        { 1, 0, 1, 1, 0 },
        { 1, 1, 1, 0, 1 },
        { 0, 1, 0, 1, 1 },
        { 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1 }
    };

    // E' possibile modificare la cella di arrivo per effettuare dei test (la cella di partenza invece è sempre [0,0])
    cout<<"Percorso: ";
    risolviLabirinto(labirinto, 4, 2);

    return 0;
}

void risolviLabirinto(int labirinto[][5], int r_goal, int c_goal) {
    init();
    bool visited[5][5] = {
        {false, false, false, false, false},
        {false, false, false, false, false},
        {false, false, false, false, false},
        {false, false, false, false, false},
        {false, false, false, false, false}
    };
    cella buffer = {0, 0};
    push(buffer);
    while (!vuota()) {
        top(buffer);
        int row = buffer.indiceRiga;
        int col = buffer.indiceColonna;
        if (row == r_goal && col == c_goal) {
            while (top(buffer)) {
                cout << '[' << buffer.indiceRiga << ", " << buffer.indiceColonna << "], ";
                pop();
            }
            cout << endl;
        } else {
            if (row+1 < 5 && labirinto[row+1][col] == 1 && !visited[row+1][col]) {
                buffer.indiceRiga = row+1;
                push(buffer);
                visited[row+1][col] = true;
            } else if (row-1 >= 0 && labirinto[row-1][col] == 1 && !visited[row-1][col]) {
                buffer.indiceRiga = row-1;
                push(buffer);
                visited[row-1][col] = true;
            } else if (col+1 < 5 && labirinto[row][col+1] == 1 && !visited[row][col+1]) {
                buffer.indiceColonna = col+1;
                push(buffer);
                visited[row][col+1] = true;
            } else if (row-1 >= 0 && labirinto[row][col-1] == 1 && !visited[row][col-1]) {
                buffer.indiceColonna = col-1;
                push(buffer);
                visited[row][col-1] = true;
            } else
                pop();
        }
    }
    deinit();
}
