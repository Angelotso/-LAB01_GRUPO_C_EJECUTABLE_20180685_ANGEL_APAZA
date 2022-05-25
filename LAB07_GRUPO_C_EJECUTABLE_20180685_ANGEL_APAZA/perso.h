#ifndef _PERSON_H_
#define _PERSON_H_
#include <iostream>
#include <string.h>
using namespace std;

class Persona
{
    protected:
        string nombre;
        int edad;
    public:
        Persona(string,int);
        ~Persona();
        void mostrarDatos();
};

#endif