using namespace std;

#include <iostream>
#include <cstring>


struct studente {
    char nome[20];
    char cognome[20];
    int matricola;
    float media_ponderata;
};

void stampa_studente(studente &);
studente genera_studente(char [], char [], int, float);


int main() {
    char nome[20], cognome[20];
    int matricola;
    float media;

    cin >> nome >> cognome >> matricola >> media;
    studente s = genera_studente(nome, cognome, matricola, media);
    stampa_studente(s);

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
