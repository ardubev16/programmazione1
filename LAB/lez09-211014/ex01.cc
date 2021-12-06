using namespace std;

#include <iostream>


void swap(double*, double*);


int main() {
    double n1, n2;

    cout << "Inserire due numeri reali: ";
    cin >> n1 >> n2;

    swap(&n1, &n2);

    cout << "n1 = " << n1 << ", n2 = " << n2 << endl;
    
    return 0;
}


void swap(double* a, double* b) {
    double tmp = *a;
    *a = *b;
    *b = tmp;
}
