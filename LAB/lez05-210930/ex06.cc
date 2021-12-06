using namespace std;

#include <iostream>

int main() {
    int a, n;

    cout << "Inserire a e n tali che a^n: ";
    cin >> a >> n;

    for (int tmp=1, i=1; i <= n; i++) {
        tmp *= a;
        cout << tmp << endl;
    }

    return 0;
}
