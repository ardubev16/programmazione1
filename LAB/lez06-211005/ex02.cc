using namespace std;

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    long N;
    double result = 0;

    cout << "Inserire N limite superiore: ";
    cin >> N;

    cout << setprecision(10) << fixed;

    for (long i=1; i<=N; i++) {
        result += 1.0/(i*i);
    }
    cout << sqrt(result*6) << endl;

    return 0;
}
