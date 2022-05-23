#ifndef _RECTANGULO_H_
#define _RECTANGULO_H_
#include "form.h"

class Rectangulo : public Forma
{
    protected:
        float LadoMayor;
        float LadoMenor;
    public:
        Rectangulo(string,float,char,float,float);
        ~Rectangulo();
        void ImprimirDatos();
        void Area();
        void Perimetro();
        void cambiartam();
};
#endif