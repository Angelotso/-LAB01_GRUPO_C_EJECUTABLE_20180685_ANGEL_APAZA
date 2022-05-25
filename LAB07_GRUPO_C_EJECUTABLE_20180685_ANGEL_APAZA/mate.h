#ifndef _MATERIAL_H_
#define _MATERIAL_H_
#include "color.h"
#include <iostream>
#include <string.h>
using namespace std;
class Material : public Color
{
    protected:
        string material;
    public:
        Material(char,string);
        ~Material();
        void Imprimirmate();
};
#endif