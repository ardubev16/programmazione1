#include <iostream>
#include <cstddef>

using namespace std;

// Inserire qui la dichiarazione di get_elements
void get_elements(char*, int, char*&, int&, char*&, int&);
void get_elements_aux(char*, int, int, char*&, int&, int, char*&, int&, int);

void print(const char a[], const int s, const char * prefix) {
  cout << prefix;
  for (int i = 0; i < s; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void read_elements(char s[], const int ms, int & s_s) {
  char r = '\0';
  for (s_s = 0; ((s_s < ms) && (r != '\n')); ) {
    r = cin.get();
    if ((r != '\n') && (r != ' ')) s[s_s++] = r;
  }
}

int main() {
  const int maxdim = 10;

  char * d1;
  int d1_s = 0;

  char * d2;
  int d2_s = 0;

  const int ms = maxdim;
  char s[ms];
  int s_s = 0;

  read_elements(s, ms, s_s);
  print(s, s_s, "Source = ");

  get_elements(s, s_s, d1, d1_s, d2, d2_s);

  print(d1, d1_s, "D1     = ");
  print(d2, d2_s, "D2     = ");

  delete [] d1;
  delete [] d2;
}

// Inserire qui la definizione di get_elements e di eventuali altre
// funzioni ausiliarie
void get_elements(char* source, int source_d, char*& dest1, int& dest1_d, char*& dest2, int& dest2_d) {
    get_elements_aux(source, source_d, 0, dest1, dest1_d, 0, dest2, dest2_d, 0);
}

void get_elements_aux(char* source, int source_d, int i,
                      char*& dest1, int& dest1_d, int i1,
                      char*& dest2, int& dest2_d, int i2) {
    if (i < source_d) {
        if (source[i] >= 'a' && source[i] <= 'z') {
            get_elements_aux(source, source_d, i+1, dest1, dest1_d, i1+1, dest2, dest2_d, i2);
            dest1[i1] = 'Z' - (source[i] - 'a');
        } else if (source[i] >= '0' && source[i] <= '9') {
            get_elements_aux(source, source_d, i+1, dest1, dest1_d, i1, dest2, dest2_d, i2+1);
            dest2[i2] = '9' - (source[i] - '0');
        } else
            get_elements_aux(source, source_d, i+1, dest1, dest1_d, i1, dest2, dest2_d, i2);
    } else {
        dest1_d = i1;
        dest2_d = i2;
        dest1 = new char[dest1_d];
        dest2 = new char[dest2_d];
    }
}
