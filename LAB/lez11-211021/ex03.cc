using namespace std;

#include <iostream>


void print_char(char, char);


int main() {
    char a, b;

    cout << "Inserire due caratteri: ";
    cin >> a >> b;

    print_char(a, b);

    return 0;
}


void print_char(char start, char end) {
    if (start <= end) {
        cout << start << endl;
        print_char(start + 1, end);
    }
}
