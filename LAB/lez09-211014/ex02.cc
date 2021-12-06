using namespace std;

#include <iostream>


int div(int, int, int&);


int main() {
    int dividendo, divisore, quoziente, resto;

    cout << "Inserire dividendo e divisore: ";
    cin >> dividendo >> divisore;

    quoziente = div(dividendo, divisore, resto);
    cout << dividendo << " / " << divisore << " = " << quoziente << ", r = " << resto << endl;

    return 0;
}


int div(int dividend, int divisor, int& remainder) {
    int quotient;
    
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }
    
    remainder = dividend;
    return quotient;
}
