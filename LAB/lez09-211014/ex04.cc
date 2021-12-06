using namespace std

#include <iostream>
#include <climits>

int max(int, int =INT_MIN, int =INT_MIN, int =INT_MIN, int =INT_MIN);
int max2(int, int);


int main() {
    int a, b, c, d, e;

    cout << "Inserire 5 numeri: ";
    cin >> a >> b >> c >> d >> e;

    cout << "Max 1,2 = " << max(a, b) << endl;
    cout << "Max 1,3,5 = " << max(a, c, e) << endl;
    cout << "Max 2,3,4,5 = " << max(b, c, d, e) << endl;
    cout << "Max 1,2,3,4,5 = " << max(a, b, c, d, e) << endl;

    return 0;
}


int max(int n1, int n2, int n3, int n4, int n5) {
    int max_num;
    max_num = max2(n1, n2);
    max_num = max2(max_num, n3);
    max_num = max2(max_num, n4);
    max_num = max2(max_num, n5);
    return max_num;
}


int max2(int n1, int n2) {
    return (n1 >= n2 ? n1 : n2);
}
