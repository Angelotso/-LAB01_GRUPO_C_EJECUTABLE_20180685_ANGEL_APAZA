#ifndef _FORMA_H_
#define _FORMA_H_
#include <iostream>
#include <string.h>
using namespace std;
class Forma
{
    private:
        string color;
        float coordenada;
        char modelo;
    public:
        Forma(string,float,char);
        ~Forma();
        virtual void ImprimirDatos();
        virtual void Area();
        void cambiarcolor();
        void movercoordenada(); 
};
#endif