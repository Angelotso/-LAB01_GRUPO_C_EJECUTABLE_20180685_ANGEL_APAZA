#include<iostream>
#include<stdlib.h>
#include "nodo.h"

class pila {
    private:
        Nodo *tope;
    public:
        pila();
        ~pila();
        void Push(int data);
        int Pop();
};
pila::pila() {
    tope = NULL;
}
pila::~pila(){
    Nodo *aux;
    while(tope!=NULL) {
        aux = tope;
        tope = (*tope).getsig();
        delete aux;
    }
}
void pila::Push(int dat){
    Nodo *n = new Nodo(dat, tope);
    tope = n;
}
int pila::Pop(){
    int dat;
    if(tope == NULL) return 0; 
    Nodo *n = tope; 
    tope = (*n).getsig(); 
    dat = (*n).getdata(); 
    delete n; 
    return dat;
}
