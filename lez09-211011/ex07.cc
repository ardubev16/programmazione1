using namespace std;

#include <iostream>
#include <cstdlib>


int dicesThrow(int);


int main() {
    int n_dadi1, n_dadi2, dadi_throw1, dadi_throw2;
    srand(time(NULL));

    cout << "Benvenuti a RISIKO!" << endl;

    cout << "Giocatore 1, inserire il numero di dadi: ";
    cin >> n_dadi1;
    dadi_throw1 = dicesThrow(n_dadi1);
    cout << "Hai fatto " << dadi_throw1 << endl << endl;

    cout << "Giocatore 2, inserire il numero di dadi: ";
    cin >> n_dadi2;
    dadi_throw2 = dicesThrow(n_dadi2);
    cout << "Hai fatto " << dadi_throw2 << endl << endl;

    if (dadi_throw1 > dadi_throw2)
        cout << "Il Giocatore 1 ha vinto!" << endl;
    else if (dadi_throw1 < dadi_throw2)
        cout << "Il Giocatore 2 ha vinto!" << endl;
    else
        cout << "Pareggio!" << endl;
        
    return 0;
}


int dicesThrow(int diceN) {
    int diceTotal = 0;

    for (int i=1; i<=diceN; i++)
        diceTotal += rand()%6 + 1;
    
    return diceTotal;
}
