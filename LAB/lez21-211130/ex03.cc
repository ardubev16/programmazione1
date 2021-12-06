#include <iostream>
#include <fstream>

using namespace std;

int asterisk_to_int(char *);
char * int_to_asterisk(int);

int main(int argc, char * argv[]) {
    if (argc != 2) {
        cout << "Usage: ./a.out <file>" << endl;
        exit(0);
    }

    fstream file;
    file.open(argv[1], ios::in);

    int nums=0, media=0;
    char tmp[11];
    for (nums=0; !file.eof(); nums++) {
        file >> tmp;
        media += asterisk_to_int(tmp);
    }
    media /= nums;
    char * media_c = int_to_asterisk(media);
    file.close();

    file.open(argv[1], ios::app);
    file << media_c << endl;
    file.close();

    delete media_c;

    return 0;
}

int asterisk_to_int(char * symbols) {
    int num = 0;
    while (symbols[num] != '\0')
        num++;
    return num;
}

char * int_to_asterisk(int num) {
    char * symbols = new char[11];
    int i=0;
    for (i=0; i<num; i++) {
        symbols[i] = '*';
    }
    symbols[i] = '\0';
    return symbols;
}
