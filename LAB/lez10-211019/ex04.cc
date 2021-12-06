using namespace std;

#include <iostream>


bool isPalindrome(int);
int invert(int, int);


int main() {
    int n;

    cout << "Inserire un numero: ";
    cin >> n;

    cout << "Il numero " << (isPalindrome(n) ? "e\'" : "non e\'") << " palindromo" << endl;

    return 0;
}


bool isPalindrome(int n) {
   return (n == invert(n, 0));
}

int invert(int n, int temp) {
    int res;
    if (n == 0)
        res = temp;
    else {
        temp = temp*10 + n%10;
        res = invert(n/10, temp);
    }

    return res;
}
