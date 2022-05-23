#include "rectan.h"
#include "elip.h"
#include "cuad.h"
#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>

using namespace std;
//EJERCICIO 1
Forma::Forma(string _color, float _coordenada, char _modelo)
{
    color=_color,
    coordenada=_coordenada;
    modelo=_modelo;
}
Forma::~Forma()
{
}
void Forma::ImprimirDatos()
{
    cout<<"color: "<<color<<endl;
    cout<<"coordenada: "<<coordenada<<endl;
    cout<<"modelo: "<<modelo<<endl;
}
void Forma::Area()
{
}
Rectangulo::Rectangulo(string _color, float _coordenada, char _modelo, float _LadoMayor, float _LadoMenor) : Forma(_color,_coordenada,_modelo)
{
    LadoMayor= _LadoMayor;
    LadoMenor= _LadoMenor;
}
Rectangulo::~Rectangulo()
{   
}
void Rectangulo::ImprimirDatos()
{
    cout<<"Este es un rectangulo"<<endl;
    cout<<"Lado Mayor: "<<LadoMayor<<endl;
    cout<<"Lado Menor: "<<LadoMenor<<endl;
    Forma::ImprimirDatos();
}
void Rectangulo::Area()
{
    float area=LadoMayor*LadoMenor;
    cout<<"el area del rectangulo es: "<<area<<endl;      
}
void Rectangulo::Perimetro()
{
    float peri=(2*LadoMayor)+(2*LadoMenor);
    cout<<"el perimetro del rectangulo es: "<<peri<<endl;
}
void Rectangulo::cambiartam()
{
    float factor;
    float Mayor,Menor;
    cout<<"ingrese un numero: ";
    cin>>factor;
    if(factor>=2){
        Mayor= LadoMayor*factor;
        Menor= LadoMenor*factor;
        cout<<"nuevo lado mayor: "<<Mayor<<endl;
        cout<<"nuevo lado menor: "<<Menor<<endl;
    }
    else if(factor<0)
    {
        Mayor = LadoMayor/factor;
        Menor = LadoMenor/factor;
        cout<<"nuevo lado mayor: "<<Mayor<<endl;
        cout<<"nuevo lado menor: "<<Menor<<endl;
    }
    else{
        cout<<"error xD"<<endl;
    }
    ImprimirDatos();
}

//EJERCICIO 2
Elipse::Elipse(string _color, float _coordenada, char _modelo,int _RMayor,int _RMenor) : Forma(_color,_coordenada,_modelo)
{
    RMayor= _RMayor;
    RMenor= _RMenor;
}
Elipse::~Elipse()
{
}
void Elipse::Area()
{
    float pi=3.1416;
    float area=pi*(RMayor*RMenor);
    cout<<"El area del elipse es: "<<area<<endl;
}
void Elipse::ImprimirDatos()
{
    cout<<"este es un elipse"<<endl;
    Forma::ImprimirDatos();
    cout<<"radio mayor: "<<RMayor<<endl;
    cout<<"Radio menor: "<<RMenor<<endl;
}
//EJERCICIO 3
Cuadrado::Cuadrado(string _color, float _coordenada, char _modelo,float _LadoMayor, float _LadoMenor) : Rectangulo(_color, _coordenada, _modelo,_LadoMayor, _LadoMenor)
{
}
Cuadrado::~Cuadrado()
{
}
void Cuadrado::Area()
{
    if(LadoMayor==LadoMenor){
    cout<<"el area del cuadradado es: "<<LadoMayor*LadoMenor<<endl;
    }
    else{
        cout<<"deben ser lados iguales"<<endl;
    }
}
void Cuadrado::ImprimirDatos()
{
    cout<<"este es un cuadrado"<<endl;
    Forma::ImprimirDatos();
}
int main()
{
    Forma *vector[5];
    Rectangulo *vitor[5];
    
    vector[0]= new Rectangulo("verde", 2.6, 'v', 9.5 ,6.3);
    vector[0]->ImprimirDatos();
    vector[0]->Area();
    cout<<"\n";
    vector[1]=new Elipse("azul",3.8,'a',15,13);
    vector[1]->ImprimirDatos();
    vector[1]->Area();
    cout<<"\n";
    vector[0]=new Cuadrado("morado",2.8,'m', 11.5,11.5);
    vector[0]->ImprimirDatos();
    vector[0]->Area();

}