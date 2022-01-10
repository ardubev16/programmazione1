// -*- C++ -*-
#ifndef ALBERO_H
#define ALBERO_H

struct coppia {
    int x;
    int y;
};

struct Nodo {
    coppia val;
    Nodo *sx;
    Nodo *dx;
};

typedef Nodo * Albero;

enum boolean { VERO, FALSO };

coppia leggi_coppia();
void stampa_coppia(coppia val);
int compara(coppia a, coppia b);
void inizializza(Albero &t);
boolean vuoto(const Albero &t);
boolean inserisci(Albero &t, coppia val);
boolean cerca(const Albero &t, coppia val);
void stampa(const Albero &t);

#endif
