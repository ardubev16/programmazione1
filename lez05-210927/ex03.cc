using namespace std;

#include <iostream>

int main() {
    char lingua;
    
    cout << "Scegliere la lingua tra: italiano, inglese, tedesco. [a,e,d]: ";
    cin >> lingua;

    switch (lingua) {
        case 'a':
            cout << "Buongiorno";
            break;
        case 'e':
            cout << "Goodmorning";
            break;
        case 'd':
            cout << "Guten Tag";
            break;
        default: cout << "Lingua non valida";
    }
    cout << endl;

    return 0;
}
