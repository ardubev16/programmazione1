#include <iostream>
#include <cmath>
#include "ex03_albero.h"

using namespace std;

coppia leggi_coppia() {
    coppia res;
    cout << "x = ";
    cin >> res.x;
    cout << "y = ";
    cin >> res.y;
    return res;
}

static double norma(coppia val) {
    return sqrt(val.x * val.x + val.y * val.y);
}

void stampa_coppia(coppia val) {
    cout << '(' << val.x << ", " << val.y << "[R = " << norma(val) << "])" << endl;
}

int compara(coppia a, coppia b) {
    int res = 0;
    double na = norma(a);
    double nb = norma(b);
    if (na < nb)
        res = -1;
    else if (na > nb)
        res = 1;
    return res;
}

void inizializza(Albero& t) {
    t = NULL;
}

boolean vuoto(const Albero& t) {
    return (t == NULL) ? VERO : FALSO;
}

boolean inserisci(Albero& t, coppia val) {
    boolean res = FALSO;
    if (vuoto(t) == VERO) {
        t = new (nothrow) Nodo;
        if (t != NULL) {
            t->val = val;
            t->sx = t->dx = NULL;
            res = VERO;
        }
    } else if (compara(val, t->val) >= 0) {
        res = inserisci(t->dx, val);
    } else {
        res = inserisci(t->sx, val);
    }
    return res;
}

boolean cerca(const Albero& t, coppia val) {
    boolean res = FALSO;
    if (vuoto(t) == FALSO) {
        if (compara(val, t->val) == 0)
            res = VERO;
        else if (compara(val, t->val) > 0)
            cerca(t->dx, val);
        else
            cerca(t->sx, val);
    }
    return res;
}

void stampa(const Albero& t) {
    if (vuoto(t) == FALSO) {
        stampa(t->sx);
        stampa_coppia(t->val);
        stampa(t->dx);
    }
}
