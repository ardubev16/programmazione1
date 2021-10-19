using namespace std;

#include <iostream>


double taylor(int, double);


int main() {
    int n;
    double x;

    cout << "Inserire un valore di N e di x: ";
    cin >> n >> x;

    cout << taylor(n, x) << endl;

    return 0;
}


double taylor(int n, double x) {
    double res=1, powx=1;
    long long facti=1;
    for (int i=1; i<=n; i++) {
        powx *= x;
        facti *= i;
        res += (powx) / (facti);
    }
    
    return res;
}
