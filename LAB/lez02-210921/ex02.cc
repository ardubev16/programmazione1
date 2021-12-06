#include <iostream>

using namespace std;

int main() {
    
    int sec_from_midnight, hour, min, sec;
    
    cout << "Inserire i secondi passati da mezzanotte: ";
    cin >> sec_from_midnight;

    hour = sec_from_midnight / 3600;
    sec_from_midnight %= 3600;
    min = sec_from_midnight / 60;
    sec = sec_from_midnight % 60;

    cout << "Sono passate " << hour << " ore, " << min << " minuti, " << sec << " secondi" << endl;

    return 0;
}
