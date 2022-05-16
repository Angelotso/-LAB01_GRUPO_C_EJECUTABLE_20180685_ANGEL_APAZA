#ifndef _CARRO_H
#define _CARRO_H
#include <string.h>
#include <iostream>
using namespace std;
class Carro
{
// Atributos: caracteristicas del carro
private:
    string modelo;
    int gasolina;
    int velocidad;
// Metodos: Acciones que realiza la clase
public:
    Carro(string, int, int); // Constructor
    ~Carro(); // Destructor
    void avanzar();
    void abastecerGasolina();
};
#endif