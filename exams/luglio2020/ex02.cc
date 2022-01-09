using namespace std;
#include <iostream>
// Inserire qui sotto la dichiarazione della funzione crea_vettore
int* crea_vettore(int);
void padovan(int*, int, int);

int main(){
    int N;
    cout << "Dimensione: ";
    cin >> N;
    if (N <= 0) {
        cout << "Attenzione: inserire intero positivo!\n";
        return 1;
    }
    int* vettore = crea_vettore(N);
    cout << "Array creato: ";

    for(int i=0; i<N; i++) {
        cout << vettore[i] << " ";
    }

    cout << endl;
    delete[] vettore;
    return 0;
}

// Inserire qui sotto la definizione della funzione crea_vettore
int* crea_vettore(int N) {
    int* vettore = new int[N];
    padovan(vettore, N, 0);
    return vettore;
}

void padovan(int* vettore, int N, int i) {
    if (i < N) {
        switch(i) {
            case 0: case 1: case 2:
                vettore[i] = 1;
                break;
            default:
                vettore[i] = vettore[i-2] + vettore[i-3];
        }
        padovan(vettore, N, i+1);
    }
}
