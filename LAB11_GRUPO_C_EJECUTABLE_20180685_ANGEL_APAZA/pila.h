#ifndef _LIST_H_
#define _LIST_H_
#include <iostream>
#include "nodo.h"
 
using namespace std;

class Pila{
	Nodo *head;
	public:
        Pila();
        ~Pila();

        void Push(int data);
        void Pop();
        void Buscar();
        void ImprimirPila();
};
Pila::Pila()
{
    head=NULL;
}
Pila::~Pila(){}
#endif 