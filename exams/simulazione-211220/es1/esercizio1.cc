#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

const int MAX_LEN = 101;

void correct(char*, bool);

int main(int argc, char * argv []) {
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

    bool flag = true;
    char buffer[MAX_LEN];
    int len = 0;
    while (input >> buffer) {
        correct(buffer, flag);
        len = strlen(buffer);
        flag = (buffer[len-1] == '.' ||
                buffer[len-1] == '!' ||
                buffer[len-1] == '?');
        output << buffer << ' ';
    }

    input.close();
    output.close();
    return 0;
}

void correct(char* word, bool flag) {
    if (flag && (word[0] <= 'z' && word[0] >='a'))
        word[0] += 'A' - 'a';
}
