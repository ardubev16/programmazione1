using namespace std;

#include <iostream>

int main() {

    for (char i='A'; i<='Z'; i++)
        cout << (int)i << '\t' << (int)(i+'a'-'A') << endl;

    return 0;
}
