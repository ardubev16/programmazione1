using namespace std;

#include <iostream>
#include <cstdlib>

const int ROWS = 10;
const int COLS = 10;


void init(int [][COLS], int=ROWS, int=COLS);
void print_mat(int [][COLS], int=ROWS, int=COLS);
void trans(int [][COLS], int [][ROWS], int=ROWS, int=COLS);


int main() {
    srand(time(NULL));

    int mat[ROWS][COLS], trans_mat[COLS][ROWS];

    init(mat);
    print_mat(mat);
    cout << endl;

    trans(mat, trans_mat);
    print_mat(trans_mat);

    return 0;
}


void init(int mat[][COLS], int rows, int cols) {
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            mat[i][j] = rand()%10 + 1;
}

void print_mat(int mat[][COLS], int rows, int cols) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++)
            cout << mat[i][j] << ' ';
        cout << endl;
    }
}

void trans(int mat[][COLS], int trans_mat[COLS][ROWS], int rows, int cols) {
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            trans_mat[i][j] = mat[j][i];
}
