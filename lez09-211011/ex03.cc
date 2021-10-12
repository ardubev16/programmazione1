using namespace std;

#include <iostream>


double funzione(int);
double eexp(int);


int main() {
    for (int i=-10; i<=10; i++)
        cout << funzione(i) << endl;
    return 0;
}


double funzione(int x) {
    return (x<=0 ? -x*x*x : eexp(x)-1);
}

double eexp(int x) {
    double e=2.7182818284, result=1;
    for (int i=0; i < x; i++)
        result *= e;
    return result;
}
