using namespace std;

#include <iostream>
#include <cstring>
#include <fstream>


struct studente {
    char nome[20];
    char cognome[20];
    int matricola;
    float media_ponderata;
};

void stampa_studente(const studente &);
studente genera_studente(char [], char [], int, float);
bool riempi_database(studente *, char [], int);


int main(int argc, char * argv[]) {
    if (argc != 3) {
        cout << "Usage: ./a.out <file> <dimensione>" << endl;
        exit(0);
    }

    int dimensione = atoi(argv[2]);
    studente * database = new studente[dimensione];

    bool risultato = riempi_database(database, argv[1], dimensione);

    if (!risultato)
        cout << "Errore nella creazione del database" << endl;
    else
        stampa_studente(database[2]);

    delete[] database;

    return 0;
}


void stampa_studente(const studente & S) {
    cout << "nome: " << S.nome << endl;
    cout << "cognome: " << S.cognome << endl;
    cout << "matricola: " << S.matricola << endl;
    cout << "media ponderata: " << S.media_ponderata << endl;
}


studente genera_studente(char nome[], char cognome[], int matricola, float media_ponderata) {
    studente s;
    strcpy(s.nome, nome);
    strcpy(s.cognome, cognome);
    s.matricola = matricola;
    s.media_ponderata = media_ponderata;
    return s;
}

bool riempi_database(studente * database, char file[], int dim) {
    fstream input;
    input.open(file, ios::in);
    if (input.fail()) {
        return false;
    }

    int indice = 0;
    char nome[20], cognome[20];
    int matricola;
    float media_ponderata;

    input >> nome >> cognome >> matricola >> media_ponderata;
    while(!input.eof() && indice < dim) {
        database[indice] = genera_studente(nome, cognome, matricola, media_ponderata);
        indice++;
        input >> nome >> cognome >> matricola >> media_ponderata;
    }
    return true;
}
