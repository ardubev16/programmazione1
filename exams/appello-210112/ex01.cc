using namespace std;

#include <iostream>
#include <fstream>


int strlen(char *);

int main(int argc, char * argv[]) {
    if (argc != 3) {
        cout << "Usage: ./a.out <input_file> <output_file>" << endl;
        exit(0);
    }

    fstream input, output;
    input.open(argv[1], ios::in);
    if (input.fail()) {
        cout << "Errore apertura file input" << endl;
        exit(0);
    }
    output.open(argv[2], ios::out);
    if (output.fail()) {
        cout << "Errore apertura file output" << endl;
        input.close();
        exit(0);
    }

    char buffer[10000][101];
    int last = 0;

    while (input >> buffer[last])
        if (strlen(buffer[last]) % 2 == 0)
            last++;

    for (int i = last -1; i >= 0; i--)
        output << buffer[i] << ' ';
    output << endl;


    input.close();
    output.close();
    return 0;
}

int strlen(char * stringa) {
    int cnt = 0;
    while (stringa[cnt] != '\0')
        cnt++;
    return cnt;
}
