using namespace std;

#include <iostream>

int main() {
    int n, cnt=0;

    cout << "Inserire un numero tra 0 e 1000: ";
    cin >> n;

    for (int i=2; i<=n; i++) {
        if (n%i)
            cnt++;
    }
    
    if (cnt > 1)
        cout << n << " non e\' primo" << endl;
    else
        cout << n << " e\' primo" << endl;

    /*
    bool primo = true;
    for (int i=2; i<n && primo; i++) {
        primo = n%i;
    }
    */

    return 0;
}
