#include <iostream>


/* Inserire qui sotto la dichiarazione della funzione extract */
char* extract(char*);
char* extract_aux(char*, int, int);
/* Inserire qui sopra la dichiarazione della funzione extract */

/* Solo di esempio, non fate assunzioni su questo valore */
const int DIM = 255;

int main(int argc, char ** argv) {
  char input_string[DIM+1];
  char * extracted;
  char answer;

  do {
    std::cout << "Inserire la stringa da controllare: ";
    std::cin >> input_string;

    extracted = extract(input_string);
    std::cout << "La stringa estratta e': " << extracted << std::endl;

    delete [] extracted;
    std::cout << "Si vuole inserire un'altra stringa? [*/n]";
    std::cin >> answer;
  } while (answer != '\0' && answer != 'N' && answer != 'n');
  return 0;
}

/* Inserire qui sotto la definizione della funzione estract */
char* extract(char* in_str) {
    return extract_aux(in_str, 0, 0);
}

char* extract_aux(char* in_str, int cnt, int at_cnt) {
    char* res;
    if (in_str[cnt] != '\0') {
        if (in_str[cnt] == '@') {
            res = extract_aux(in_str, cnt+1, at_cnt+1);
            res[at_cnt] = '@';
        } else
            res = extract_aux(in_str, cnt+1, at_cnt);
    } else {
        res = new char[at_cnt+1];
        res[at_cnt] = '\0';
    }
    return res;
}
/* Inserire qui sopra la definizione della funzione estract */

