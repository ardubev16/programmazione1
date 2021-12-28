using namespace std;

#include <iostream>


double serie(int);


int main() {
    int n;

    cout << "Inserire un numero N: ";
    cin >> n;

    cout << serie(n) << endl;

    return 0;
}


double serie(int n) {
    double res;
    for (int i=1; i <= n; i++) {
        res += (((1+i)%2 ? -1 : 1) * 4.0) / (2*i - 1);
    }

    return res;
}
