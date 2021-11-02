using namespace std;

#include <iostream>
#include <cstdlib>

const int ROWS = 10;
const int COLS = 10;


void init(int [][COLS], int=ROWS, int=COLS);
void print_arr(int [][COLS], int=ROWS, int=COLS);


int main() {
    srand(time(NULL));

    int mat[ROWS][COLS];

    init(mat);
    print_arr(mat);

    return 0;
}


void init(int arr[][COLS], int rows, int cols) {
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            arr[i][j] = rand()%10 + 1;
}

void print_arr(int arr[][COLS], int rows, int cols) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}
