using namespace std;

#include <iostream>
#include <cstdlib>


void init(int [], int);
void print_arr(int [], int);
void bubbleSort(int [], int);
void remove_dup(int [], int);


int main() {
    srand(time(NULL));

    const int DIM = 10;
    int arr[DIM];

    init(arr, DIM);
    print_arr(arr, DIM);
    cout << endl;

    bubbleSort(arr, DIM);
    print_arr(arr, DIM);
    cout << endl;

    remove_dup(arr, DIM);
    print_arr(arr, DIM);

    return 0;
}


void init(int arr[], const int DIM) {
    for (int i=0; i<DIM; i++)
        arr[i] = (rand() % 10) + 1;
}

void print_arr(int arr[], const int DIM) {
    for (int i=0; i<DIM; i++)
        cout << "arr[" << i << "] = " << arr[i] << endl;
}

void bubbleSort(int arr[], int DIM) {
    for (int i=0; i<DIM; i++)
        for (int j=0; j<DIM-i-1; j++)
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
}

void remove_dup(int arr[], int DIM) {
    int attuale = arr[0];
    for (int i=1; i<DIM; i++) {
        if (arr[i] == attuale)
            arr[i] = -1;
        else
            attuale = arr[i];
    }
}
