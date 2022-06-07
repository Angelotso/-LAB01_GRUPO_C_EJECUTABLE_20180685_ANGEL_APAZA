#include <iostream>
#include "ndo.h"

using namespace std;
 
template<typename T>
Nodo<T>::Nodo()
{
    data = NULL;
    sig = NULL;
}
 
template<typename T>
Nodo<T>::Nodo(T data_)
{
    data = data_;
    sig = NULL;
}
template<typename T>
void Nodo<T>::eliminar()
{
    if (sig)
        sig->eliminar();
    delete this;
}
template<typename T>
void Nodo<T>::Imprimir()
{
    //cout << "Node-> " << "Dato: ";
    cout << data << "-> ";
}
template<typename T>
Nodo<T>::~Nodo() {}
