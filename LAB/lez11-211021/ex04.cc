using namespace std;

#include <iostream>


bool isPrime(int, int =2);
void primeFactor(int, int =2);


int main() {
    int n;

    cin >> n;

    primeFactor(n);

    return 0;
}


bool isPrime(int number, int div) {
    bool res;
    if (div > number/2)
        res = 1;
    else
        res = res && (number%div != 0) && isPrime(number, div+1);

    return res;
}

void primeFactor(int number, int div) {
    if (div > n)
        return;
    else {
        if (isPrime(div)) {
            
        }
    }
    primeFactor(number/div, 2)
}
