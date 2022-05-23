#ifndef _CUADRADO_H_
#define _CUADRADO_H_
#include"rectan.h"

class Cuadrado : public Rectangulo
{
    public:
        Cuadrado(string,float,char,float,float);
        ~Cuadrado();
        void Area();
        void ImprimirDatos();
};
#endif