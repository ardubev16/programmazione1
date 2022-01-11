#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int base17_dec(char*);
int char_int(char);
int operation(int, int, char);

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: ./a.out <input_file> <output_file>" << endl;
        exit(0);
    }

    fstream input, output;
    input.open(argv[1], ios::in);
    if (input.fail()) {
        cout << "Input error!" << endl;
        exit(0);
    }
    output.open(argv[2], ios::out);
    if (output.fail()) {
        cout << "Output error!" << endl;
        input.close();
        exit(0);
    }

    char buffer[11];
    int n1, n2;
    char op;
    while (input >> buffer) {
        n1 = base17_dec(buffer);
        input >> buffer;
        op = buffer[0];
        input >> buffer;
        n2 = base17_dec(buffer);
        output << operation(n1, n2, op) << endl;
    }

    input.close();
    output.close();
    return 0;
}

int base17_dec(char* n17) {
    int n10 = 0;
    for (int i=0; n17[i] != '\0'; i++) {
        n10 = n10*17 + char_int(n17[i]);
    }
    return n10;
}

int char_int(char k17) {
    int res = 0;
    if (k17 >= '0' && k17 <= '9')
        res = (int)(k17 - '0');
    else if (k17 >= 'A' && k17 <= 'G')
        res = (int)(k17 - 'A' + 10);
    return res;
}

int operation(int n1, int n2, char op) {
    int res = 0;
    switch (op) {
        case '-':
            res = n1 - n2;
            break;
        case '/':
            res = n1 / n2;
            break;
        case '%':
            res = n1 % n2;
    }
    return res;
}
