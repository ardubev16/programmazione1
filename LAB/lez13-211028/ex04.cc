using namespace std;

#include <iostream>
#include <cstdlib>


void init(int [], int);
void print_arr(int [], int);
void bubbleSort(int [], int);
int binary_search(int [], int, int, int=0);


int main() {
    srand(time(NULL));

    const int DIM = 10;
    int arr[DIM];
    int n;

    init(arr, DIM);
    print_arr(arr, DIM);
    cout << endl;

    bubbleSort(arr, DIM);
    print_arr(arr, DIM);
    cout << endl;

    cout << "Inserire n: ";
    cin >> n;
    cout << binary_search(arr, DIM, n) << endl;

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

int binary_search(int arr[], int max, int value, int min) {
    int res = -1;
    if (min <= max) {
        int medio = (max+min)/2;

        if (value > arr[medio])
            res = binary_search(arr, max, value, medio+1);
        else if (value < arr[medio])
            res = binary_search(arr, medio-1, value, min);
        else
            res = medio;
    }

    return res;
}
