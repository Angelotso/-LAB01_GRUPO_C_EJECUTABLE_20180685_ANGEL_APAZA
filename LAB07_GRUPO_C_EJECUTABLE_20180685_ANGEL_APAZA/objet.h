#ifndef _OBJETO_H_
#define _OBJETO_H_
#include "mate.h"

class Objeto : public Material
{
    private:
        string objeto;
    public:
        Objeto(char,string,string);
        ~Objeto();
        void ImprimirObj();
};
#endif