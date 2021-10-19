using namespace std;

#include <iostream>


void digit_count(long long, int []);


int main() {
    long long number;
    int a[10]={};

    cout << "Inserire un numero: ";
    cin >> number;

    digit_count(number, a);
    for (int i=0; i<10; i++)
        cout << "Frequenza " << i << ": " << a[i] << endl;

    return 0;
}


void digit_count(long long number, int arr[]) {
    while (number != 0) {
        arr[number%10]++;
        number /= 10;
    }
}
