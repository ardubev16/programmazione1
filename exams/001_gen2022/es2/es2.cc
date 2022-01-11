#include <iostream>
#include <cstdlib>
#include <cassert>

struct node {
		char info;
		node * next;
};

void dealloca(node *& s) {
		while(s != NULL) {
				node * t = s;
				s = s->next;
				delete t;
		}
}

void stampa_lista(const char * testo, node * s) {
		std::cout << testo;
		for( ; s!= NULL; s=s->next) {
				std::cout << " " << s->info;
		}
		std::cout << std::endl;
}

// Scrivere qui sotto la dichiarazione della funzione compute_lists ed
// eventuali funzioni accessorie
void compute_lists(char*, node*&, node*&);
void compute_lists_aux(char*, node*&, node*&, int);
// Scrivere qui sopra la dichiarazione della funzione compute_lists ed
// eventuali funzioni accessorie

int main(int argc, char **argv) {
		if (argc != 2) {
				std::cout << "Usage: " << argv[0]
														<< " \"stringa di caratteri\"" << std::endl;
				exit(1);
		}
		node * s1, * s2;
		std::cout << "La stringa da analizzare e': " << argv[1] << std::endl;

		compute_lists(argv[1], s1, s2);

		stampa_lista("Lista s1:", s1);
		stampa_lista("Lista s2:", s2);
		dealloca(s1);
		dealloca(s2);
}

// Scrivere qui sotto la definizione della funzione compute_lists ed
// eventuali funzioni accessorie
void compute_lists(char* source, node*& dest1, node*& dest2) {
    dest1 = NULL;
    dest2 = NULL;
    compute_lists_aux(source, dest1, dest2, 0);
}

void compute_lists_aux(char* source, node*& dest1, node*& dest2, int i) {
    node* tmp;
    if (source[i] != '\0') {
        if (source[i] >= 'a' && source[i] <= 'm') {
            tmp = new node;
            tmp->info = 'M' - (source[i] - 'a');
            compute_lists_aux(source, dest1, dest2, i+1);
            tmp->next = dest1;
            dest1 = tmp;
        } else if (source[i] >= 'n' && source[i] <= 'z') {
            tmp = new node;
            tmp->info = 'Z' - (source[i] - 'n');
            compute_lists_aux(source, dest1, dest2, i+1);
            tmp->next = dest2;
            dest2 = tmp;
        } else
            compute_lists_aux(source, dest1, dest2, i+1);
    }
}
// Scrivere qui sopra la definizione della funzione compute_lists ed
// eventuali funzioni accessorie
