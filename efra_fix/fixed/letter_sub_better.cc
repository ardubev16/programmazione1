/*Scrivere un programma che, dato in input il nome di un file F e
una lettera L, stampi a video il contenuto di quel file, sostituendo
ogni occorrenza della lettera L con il simbolo “?”
"Che magnifica giornata", a
            =
"Che m?gnific? giorn?t?" */
using namespace std;
#include <iostream>
#include <fstream>

int main (int argc, char *argv[]) {
    if (argc != 3) {
        cout << "Usare il formato './a.out <file_name> <lettera da sostituire>" << endl;
        exit (0);
    }

    fstream input;
    input.open(argv[1], ios::in);
    if (input.fail()) {
        cout << "File not found" << endl;
        exit (0);
    }
    char to_remove = argv[2][0];
    char c;
    while (input.get(c)) {
        if (c == to_remove)
            c = '?';
        cout << c;
    }

    return 0;
}
