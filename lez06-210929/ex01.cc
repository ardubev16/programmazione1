using namespace std;

#include <iostream>

int main() {
    int fib_2=0, fib_1=1, fib_curr=0;

    for (int i=0; i < 20; i++) {
        cout << (fib_curr) << endl;

        fib_curr = fib_2 + fib_1;
        fib_2 = fib_1;
        fib_1 = fib_curr;
    }
    
    return 0;
}
