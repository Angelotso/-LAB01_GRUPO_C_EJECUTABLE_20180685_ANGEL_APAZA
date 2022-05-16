#ifndef __ALUM_H_
#define _ALUM_H_
#include <iostream>
#include <string.h>
using namespace std;

class Alumno
{
    private:
        int CUI;
        string nombre;
        string apellido;
        int n1,n2,n3;
    public:
        Alumno(int,string,string,int,int,int);
        ~Alumno();
        void Imprimir();
        void Parciales();
};
#endif