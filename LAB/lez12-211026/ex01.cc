using namespace std;

#include <iostream>
#include <cstdlib>


void random_arr(int []);
void print_arr(int []);


int DIM=10;

int main() {
    srand(time(NULL));
    int arr[DIM];

    random_arr(arr);
    print_arr(arr);

    return 0;
}


void random_arr(int arr[]) {
    for (int i=0; i<DIM; i++)
        arr[i] = (rand() % 100) + 1;
}

void print_arr(int arr[]) {
    for (int i=0; i<DIM; i++)
        cout << "arr[" << i << "] = " << arr[i] << endl;
}
