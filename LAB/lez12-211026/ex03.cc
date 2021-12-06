using namespace std;

#include <iostream>
#include <cstdlib>


void init(int [], int);
double media(int [], int);
void min_max(int [], int, int, int);


int main() {
    srand(time(NULL));
    const int DIM = 10;
    int arr[DIM];
    int min=0, max=0;

    init(arr, DIM);

    cout << "media = " << media(arr, DIM) << endl;
    min_max(arr, DIM, min, max);

    cout << "min = " << min << endl
         << "max = " << max << endl;

    return 0;
}


void init(int arr[], const int DIM) {
    for (int i=0; i<DIM; i++)
        arr[i] = (rand() % 10) + 1;
}

double media(int arr[], const int DIM) {
    double somma = 0;
    for (int i=0; i<DIM; i++)
        somma += arr[i];

    return (somma / DIM);
}

void min_max(int arr[], const int DIM, int min, int max) {
    min = arr[0];
    max = arr[0];

    for (int i=0; i<DIM; i++) {
        min = ((arr[i] < min) ? arr[i] : min);
        max = ((arr[i] > max) ? arr[i] : max);
    }
}
