using namespace std;

#include <iostream>
#include <cstdlib>

const int ROWS = 10;
const int COLS = 10;


void init(int [][COLS], int=ROWS, int=COLS);
void print_mat(int [][COLS], int=ROWS, int=COLS);
int island(int [][COLS], int=ROWS, int=COLS);
bool is_island(int [][COLS], int, int);


int main() {
    srand(time(NULL));

    int mat[ROWS][COLS];

    init(mat);
    print_mat(mat);

    cout << "ISOLE: " << island(mat) << endl;

    return 0;
}


void init(int mat[][COLS], int rows, int cols) {
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            mat[i][j] = rand() % 2;
}

void print_mat(int mat[][COLS], int rows, int cols) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++)
            cout << mat[i][j] << ' ';
        cout << endl;
    }
}

int island(int mat[][COLS], int rows, int cols) {
    int island_num = 0;
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            if (mat[i][j] == 1)
                island_num += is_island(mat, i, j);

    return island_num;
}

bool is_island(int mat[][COLS], int starting_row, int starting_col) {
    int one_num = 0;
    for (int i=starting_row-1; i <= starting_row+1; i++)
        for (int j=starting_col-1; j <= starting_col+1; j++)
            if (i >= 0 && i < ROWS)
                if (j >= 0 && j < COLS)
                    one_num += mat[i][j];

    return one_num == 1;
}
