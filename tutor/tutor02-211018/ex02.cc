using namespace std;

#include <iostream>


int count_even(int [], int);
int count_even_tr(int [], int, int);


int main() {
    int a[] = {0,1,2,3,4,5,6,7,8,9,10};

    cout << "count even: " << count_even(a, sizeof(a)/sizeof(int)-1) << endl;
    cout << "count even (tr): " << count_even_tr(a, sizeof(a)/sizeof(int)-1, /*placeholder*/) << endl;
    
    return 0;
}


int count_even(int arr[], int i) {
    int res;
    if (i < 0)
        res = 0;
    else
        res = (int)!(arr[i]%2) + count_even(arr, i-1);

    return res;
}

int count_even_tr(int arr[], int i, int cnt) {
    
}
