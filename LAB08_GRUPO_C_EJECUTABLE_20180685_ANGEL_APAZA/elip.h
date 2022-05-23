#ifndef _ELIPSE_H_
#define _ELIPSE_H_
#include "form.h"
#include<iostream>
#include <string.h>
using namespace std;

class Elipse : public Forma
{
    private:
        int RMayor;
        int RMenor;
    public:
        Elipse(string , float, char,int,int);
        ~Elipse();
        void Area();
        void ImprimirDatos();
};
#endif