#include <iostream>

using namespace std;

// Inserire qui sotto la dichiarazione della funzione convert
long long int convert(char*, int, const int = 4);
long long int convert_aux(char*, const int, int, int);
int get_num(char*, int);
int strlen(char*, int =0);
// Inserire qui sopra la dichiarazione della funzione convert


bool check_base(const char n, const int base) {
  switch(base) {
  case 2:
    return ((n == '0') || (n == '1'));
  case 4:
    return ((n >= '0') && (n <= '3'));
  case 8:
    return ((n >= '0') && (n <= '8'));
  case 16:
    return (((n >= '0') && (n <= '9')) ||
	    ((n >= 'A') && (n <= 'D')) ||
	    ((n >= 'a') && (n <= 'd')));
  default:
    return false;
  }
}

bool controlla(char * num, const int maxdim, const unsigned int base = 4) {
  for(int i = 0; ((i < maxdim) && (num[i] != '\0')); i++) {
    if (num[i] >= 'A' && num[i] <= 'Z') {
      num[i] = 'a' + (num[i] - 'A');
    }
    if (!check_base(num[i], base)) return false;
  }
  return true;
}


int main() {
  const unsigned int maxdim = 100;
  char number[maxdim];

  cout << "Inserire numero: ";
  cin >> number;
  if (!controlla(number, maxdim)) {
    cout << "Il numero deve contenere solo caratteri rispetto alla base" << endl;
    exit(1);
  }

  long long int decimal = convert(number, maxdim);

  cout << "The converted number is: " << decimal << endl;
}

// Inserire qui sotto la definizione della funzione convert
long long int convert(char* source, int maxdim, const int base) {
    return convert_aux(source, base, strlen(source), 0);
}

long long int convert_aux(char* source, const int base, int len, int index) {
    long long int res = 0;
    if (source[index] != '\0')
        res = base*convert_aux(source, base, len, index+1) + get_num(source, len-index-1);
    return res;
}

int get_num(char* source, int index) {
    int res = 0;
    char tmp = source[index];
    if (tmp >= '0' && tmp <= '9')
        res = (int)(tmp-'0');
    else if (tmp >= 'a' && tmp <= 'f')
        res = (int)(tmp-'a');
    else if (tmp >= 'A' && tmp <= 'F')
        res = (int)(tmp-'A');
    return res;
}

int strlen(char* source, int i) {
    int res = 0;
    if (source[i] != '\0')
        res = 1 + strlen(source, i+1);
    return res;
}

// Inserire qui sopra la definizione della funzione convert
