#ifndef __PERSON_H_
#define _PERSON_H_
#include <iostream>
#include <string.h>
using namespace std;

class Persona
{
    private:
        string nombre;
        int dia;
        int mes;
        int anio;
    public:
        Persona(string,int,int,int);
        ~Persona();
        void FechaHoy();
        void FechaNacimiento();
        void Edad();
};
#endif