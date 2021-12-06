using namespace std;

#include <iostream>
#include <cstdlib>


void init(int [], int);
int arr_eq(int [], int [], int);


int main() {
    srand(time(NULL));
    const int DIM = 20;
    int arr1[DIM], arr2[DIM];

    init(arr1, DIM);
    init(arr2, DIM);

    cout << arr_eq(arr1, arr2, DIM) << endl;

    return 0;
}


void init(int arr[], int DIM) {
    for (int i=0; i<DIM; i++)
        arr[i] = (rand() % 10) + 1;
}

int arr_eq(int arr1[], int arr2[], int DIM) {
    int res = 0;
    for (int i=0; i<DIM; i++)
        res += (int)(arr1[i] == arr2[i]);

    return res;
}
