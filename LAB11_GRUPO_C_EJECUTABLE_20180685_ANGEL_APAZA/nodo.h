#ifndef _NODO_H_
#define _NODO_H_

#include <iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
class Nodo
{

    public:
        int data;
        Nodo *siguiente;
        Nodo(int dat,Nodo *sig){
            data=dat;
            siguiente=sig;
        }
        Nodo *getsig(){return(siguiente);};
        int getdata(){return(data);};
        ~Nodo();
};
Nodo::~Nodo(){}
#endif