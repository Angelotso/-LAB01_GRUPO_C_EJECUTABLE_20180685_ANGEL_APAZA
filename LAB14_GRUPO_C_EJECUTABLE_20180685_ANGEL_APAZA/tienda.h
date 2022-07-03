#ifndef _TIENDA_H_
#define _TIENDA_H_
#include <iostream>
#include<string.h>
#include<stdlib.h>
#include "nodo.h"
 
using namespace std;

class Tienda{
	Nodo *head;
	public:
        Tienda();
        ~Tienda();
        void InsertarProducto(string data);
        void EliminarProducto(int pos);
        void BuscarProducto(int pos);
        void ImprimirTienda();
};
Tienda::Tienda()
{
    head=NULL;
}
Tienda::~Tienda(){}
#endif 