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
        Nodo *sig;
        Nodo();
        ~Nodo();
};
Nodo::Nodo()
{
    sig=NULL;
}
Nodo::~Nodo(){}
#endif