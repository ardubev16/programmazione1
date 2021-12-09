using namespace std;

#include <iostream>

char* vRot(char*, int, int);
void vPrint(char*, int);


int main() {
    const int DIM = 5;
    char v[DIM] = {'A', 'B', 'C', 'D', 'E'};
    int j;

    cout << "Insert number of rotations: ";
    cin >> j;

    vPrint(v, DIM);
    char* vr = vRot(v, DIM, j);
    vPrint(vr, DIM);

    delete[] vr;
    return 0;
}


char* vRot(char* v, int dim, int j) {
    j = j % dim;
    char* vr = new char[dim];
    for (int i=0; i<dim; i++)
        vr[i] = v[(i + j) % dim];
    return vr;
}

void vPrint(char* v, int dim) {
    for (int i=0; i<dim; i++)
        cout << v[i] << ' ';
    cout << endl;
}
