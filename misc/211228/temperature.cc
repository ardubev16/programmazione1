/* Scrivere un programma che, dato un file in input da linea di
comando contenente diverse temperature, salvi queste
temperature in un array dinamico e stampi a video le prime N
temperature più alte. Il valore N viene specificato dall’utente da
linea di comando. Il programma accetta anche un intero M che
indica quante temperature sono presenti nel file (M<=n_temps) */

using namespace std;

#include <iostream>
#include <fstream>

void bubble_sort(double*, int);
void swap(double&, double&);

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cout << "Usage: ./a.out <input_file> <high_temps> <temps_n>" << endl;
        exit(0);
    }
    int N = atoi(argv[2]);
    int M = atoi(argv[3]);

    fstream input;
    input.open(argv[1], ios::in);
    if (input.fail()) {
        cout << "Input file error!" << endl;
        exit(0);
    }

    double* temp_buffer = new double[M];
    for (int i=0; i<M; i++)
        input >> temp_buffer[i];
    bubble_sort(temp_buffer, M);

    for (int i=(M-1); i>(M-1-N); i--)
        cout << temp_buffer[i] << endl;


    delete[] temp_buffer;
    input.close();

    return 0;
}


void bubble_sort(double* arr, int N) {
    for (int i=0; i<N; i++)
        for (int j=1; j<(N-i); j++)
            if (arr[j-1] > arr[j])
                swap(arr[j-1], arr[j]);
}

void swap(double& n1, double& n2) {
    double tmp = n1;
    n1 = n2;
    n2 = tmp;
}
