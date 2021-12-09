using namespace std;

#include <iostream>
#include <cstdlib>


typedef int** mat;
mat init(int, int);
void deinit(mat, int);
void print_submat(mat, int, int, int, int, int, int);


int main() {
    srand(time(NULL));

    int rows, cols;
    cout << "Insert rows and cols: ";
    cin >> rows >> cols;

    mat matrix = init(rows, cols);
    int r0=0, c0=0, nr=rows, nc=cols;
    print_submat(matrix, rows, cols, r0, c0, nr, nc);

    cout << "Insert starting row, col and number of rows and cols: ";
    cin >> r0 >> c0 >> nr >> nc;
    print_submat(matrix, rows, cols, r0, c0, nr, nc);

    deinit(matrix, rows);
    return 0;
}


mat init(int rows, int cols) {
    mat res = new int* [rows];
    for (int i=0; i<rows; i++) {
        res[i] = new int[cols];
        for (int j=0; j<cols; j++)
            res[i][j] = rand() % 10;
    }
    return res;
}

void deinit(mat matrix, int rows) {
    for (int i=0; i<rows; i++)
        delete[] matrix[i];
    delete[] matrix;
}

void print_submat(mat matrix, int rows, int cols,
                  int r0, int c0, int nr, int nc) {

    for (int i=r0; i<(r0+nr) && i<rows; i++) {
        for (int j=c0; j<(c0+nc) && j<cols; j++)
            cout << matrix[i][j] << ' ';
        cout << endl;
    }
}
