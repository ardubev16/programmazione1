using namespace std;

#include <iostream>
#include "coda.h"
#include "pila.h"

void inverti_pila();

int main() {
    pila_init();

    pila_push(1);
    pila_push(2);
    pila_push(3);
    pila_push(4);
    pila_push(5);

    pila_print();

    inverti_pila();

    pila_print();

    pila_deinit();

    return 0;
}

void inverti_pila() {
    int tmp;
    coda_init();
    while (pila_top(tmp)) {
        coda_enqueue(tmp);
        pila_pop();
    }
    while (coda_first(tmp)) {
        pila_push(tmp);
        coda_dequeue();
    }
    coda_deinit();
}
