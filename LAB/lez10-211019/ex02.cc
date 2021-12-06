using namespace std;

#include <iostream>


int division(int, int);


int main() {
    int a, b;

    cout << "Inserire dividendo e divisore: ";
    cin >> a >> b;

    cout << "a/b = " << division(a, b) << endl;

    return 0;
}


int division(int dividend, int divisor) {
    int res;
    if (dividend < divisor)
        res = 0;
    else
        res = 1 + division(dividend - divisor, divisor);

    return res;
}
