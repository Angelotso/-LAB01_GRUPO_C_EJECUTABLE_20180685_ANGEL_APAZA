#ifndef _ALUMN_H
#define _ALUMN_H
#include "perso.h"
#include <iostream>
using namespace std;

class Alumno : public Persona
{
    private:
        string nombre2;
    public:
        Alumno(string ,int, string);
        ~Alumno();
        void ImprimirDatos();
};
#endif