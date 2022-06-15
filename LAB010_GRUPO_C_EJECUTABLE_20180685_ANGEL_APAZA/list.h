#ifndef _LIST_H_
#define _LIST_H_
#include <iostream>
#include "ndo.h"
 
using namespace std;

class Lista{
	Nodo *head;
	public:
        Lista();
        ~Lista();
        void InsertarNodoInicial(int data);
        void InsertarNodoFinal(int data);
        void InsertarNodoMedio(int data, int pos);
        void EliminarNodoInicial();
        void EliminarNodoFinal();
        void EliminarporPosicion(int pos);
        void ImprimirLista();
};
Lista::Lista()
{
    head=NULL;
}
Lista::~Lista(){}
#endif 