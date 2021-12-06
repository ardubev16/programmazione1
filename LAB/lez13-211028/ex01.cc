using namespace std;

#include <iostream>
#include <cstdlib>


void init(int [], int);
void print_arr(int [], int);
int seq_find(int [], int, int);


int main() {
    srand(time(NULL));

    const int DIM = 10;
    int arr[DIM];
    int n;

    init(arr, DIM);
    print_arr(arr, DIM);

    cout << "Inserire un valore tra (0-9): ";
    cin >> n;
    cout << seq_find(arr, DIM, n) << endl;

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

int seq_find(int arr[], const int DIM, int value) {
    int res = -1;
    for (int i=0; i<DIM && res == -1; i++)
        if (arr[i] == value)
            res = i;

    return res;
}
