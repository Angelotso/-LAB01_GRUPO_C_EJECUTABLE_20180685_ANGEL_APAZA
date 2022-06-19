#ifndef _COLA_H_
#define _COLA_H_
#include <iostream>
#include "nodo.h"
 
using namespace std;

class Cola{
	Nodo *head;
	public:
        Cola();
        ~Cola();

        void InsertarElemento(int data);
        void ElimarElemento();
        void BuscarElemento();
        void ImprimirCola();
};
Cola::Cola()
{
    head=NULL;
}
Cola::~Cola(){}
#endif 