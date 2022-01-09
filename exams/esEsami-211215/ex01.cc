#include <iostream>
#include <fstream>

using namespace std;

bool isMIU(char*);
int strlen(char*);

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

    char buffer[101];
    while (input >> buffer)
        if (isMIU(buffer))
            output << buffer << endl;

    input.close();
    output.close();
}

bool isMIU(char* word) {
    bool res = true;
    int len = strlen(word);

    // condition 1
    if (word[0] == 'M')
        res = (word[len-1] == 'U');

    // condition 2
    int i_cnt = 0;
    for (int i=0; i < len; i++)
        i_cnt += (word[i] == 'I');
    res = res && (i_cnt == 0 || i_cnt%2 == 1);

    // condition 3
    for (int i=0; i < len-1; i++)
        if (word[i] == 'I')
            res = res && (word[i+1] != 'M');

    return res;
}

int strlen(char* word) {
    int res = 0;
    while (word[res] != '\0')
        res++;
    return res;
}
