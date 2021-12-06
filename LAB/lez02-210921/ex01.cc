#include <iostream>

using namespace std;

int main() {

    int hour, min, sec, sec_from_midnight;

    cout << "Inserire l\'ora: ";
    cin >> hour;
    cout << "Inserire i minuti: ";
    cin >> min;
    cout << "Inserire i secondi: ";
    cin >> sec;

    sec_from_midnight = hour * 3600 + min * 60 + sec;
    cout << "Secondi passati da mezzanotte: " << sec_from_midnight << endl;

    return 0;
}
