using namespace std;

#include <iostream>


void moveTower(int, char, char, char);


int main() {
    int n;

    cout << "Inserire numero di anelli: ";
    cin >> n;

    moveTower(n, 'A', 'B', 'C');

    return 0;
}

void moveTower(int disk, char source, char dest, char spare) {
    if (disk == 1)
        cout << "Muovi disco " << disk << " da " << source << " al " << dest << endl;
    else {
        moveTower(disk-1, source, spare, dest);
        cout << "Muovi disco " << disk << " da " << source << " al " << dest << endl;
        moveTower(disk-1, spare, dest, source);
    }
}
