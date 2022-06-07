#ifndef _NODO_H_
#define _NODO_H_

#include <iostream>
template <class T>
class Nodo
{
    public:
        Nodo();
        Nodo(T);
        ~Nodo();
 
        Nodo *sig;
        T data;
 
        void eliminar();
        void Imprimir();
};
#endif