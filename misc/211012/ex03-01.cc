using namespace std;

#include <iostream>


double geom_serie(int);


int main() {
    int n;

    cout << "Inserire un numero N: ";
    cin >> n;

    cout << geom_serie(n) << endl;

    return 0;
}


double geom_serie(int n) {
    double res=0, pow2=1;
    for (int i=0; i<=n; i++) {
        res += 1.0/pow2;
        pow2 *= 2;
    }
    
    return res;
}
