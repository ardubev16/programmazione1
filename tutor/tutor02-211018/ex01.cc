using namespace std;

#include <iostream>


int somma(int, int);
int somma_tr(int, int);


int main() {
    int a, b;

    cout << "Inserire due valori interi: ";
    cin >> a >> b;

    cout << "Somma ricorsiva: " << somma(a, b) << endl;
    cout << "Somma ricorsiva (tr): " << somma_tr(a, b) << endl;

    return 0;
}


int somma(int n1, int n2) {
    int res;
    if (n2 == 0)
        res = n1;
    else
        res = 1 + somma(n1, n2 - 1);

    return res;
}

int somma_tr(int n1, int n2) {
    int res;
    if (n2 == 0)
        res = n1;
    else
        res = somma(n1 + 1, n2 - 1);

    return res;
}
