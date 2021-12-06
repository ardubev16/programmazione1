using namespace std;

#include <iostream>
#include <cstdlib>


void init(int [], int);
void print_arr(int [], int);
void invert(int [], int);


int main() {
    srand(time(NULL));
    const int DIM = 10;
    int arr[DIM];

    init(arr, DIM);

    print_arr(arr, DIM);
    cout << endl;

    invert(arr, DIM);
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

void invert(int arr[], const int DIM) {
    int tmp;
    for (int i=0; i<(DIM/2); i++) {
        tmp = arr[i];
        arr[i] = arr[(DIM-1) - i];
        arr[(DIM-1) - i] = tmp;
    }
}
