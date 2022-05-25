//#include "alum.h"
//#include "objet.h"
#include "disc.h"
#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

//EJERCICIO 1
/*
Persona::Persona(string _nombre,int _edad)
{
    nombre=_nombre;
    edad=_edad;
}
Persona::~Persona()
{
}
void Persona::mostrarDatos()
{
    cout<<"nombre: "<<nombre<<endl;
    cout <<"edad: "<<edad;
}

Alumno::Alumno(string _nombre,int _edad ,string _nombre2) : Persona(_nombre,_edad)
{
    nombre2=_nombre2;
}
Alumno::~Alumno()
{
}
void Alumno::ImprimirDatos()
{
    mostrarDatos();
    cout<<endl;
    cout << "el segundo nombre es:"<<nombre2<<endl;
    cout<<"nombre completo: "<<nombre<<" "<<nombre2<<endl;
}

int main()
{
    Alumno a1= Alumno("Jorge",20,"Manuel");
    Alumno a2= Alumno("Gabriel",15,"Tobias");
    a1.ImprimirDatos();
    a2.ImprimirDatos();
    return 0;
}
*/
/*
//EJERCICIO 2
Color::Color(char _color)
{
    color=_color;
}
Color::~Color()
{
}
void Color::Imprimircolor()
{
    string col;
    if (color=='r'){
        col="rojo";
    }
    else if (color=='g'){
        col="guinda";
    }
    else if(color=='b'){
        col="blanco";
    }
    else cout<<"error";

    cout<<"color del objeto: "<<col<<endl;
}

Material::Material(char _color, string _material) : Color(_color)
{
    material = _material;
}
Material::~Material()
{
}
void Material::Imprimirmate()
{
    Imprimircolor();
    cout<<"Tipo material: "<<material<<endl;
}

Objeto::Objeto(char _color, string _material,string _objeto) : Material(_color,_material)
{
    objeto=_objeto;
}
Objeto::~Objeto()
{
}
void Objeto::ImprimirObj()
{
    Imprimirmate();
    cout<<"El/La "<<objeto<<" es de color "<<color<<" y el material es "<<material<<endl;
}

int main()
{
    Objeto ob1= Objeto('r',"madera","silla");
    ob1.ImprimirObj();
    cout<<"\n";
    Objeto ob2= Objeto('b',"metal","mesa");
    ob2.ImprimirObj();
}
*/

//EJERCICIO 4
Multimedia::Multimedia(string _pelicula, string _musica)
{
    pelicula = _pelicula;
    musica = _musica;
}
Multimedia::~Multimedia()
{
}
void Multimedia::Mostrarmulti()
{
    cout<<"Pelicula a ver: "<<pelicula<<endl;
    cout<<"musica que desea escuchar: "<<musica<<endl;
}

Disco::Disco(string _pelicula, string _musica ,string _disco) : Multimedia(_pelicula,_musica)
{
    disco= _disco;
}
Disco::~Disco()
{
}
void Disco::tipodisco()
{
    Mostrarmulti();
    cout<<"disco : "<<disco<<endl;
}

int main()
{
    Disco d1=Disco("avengers","cumbias", "duro Phentom HD ");
    d1.tipodisco();
    cout<<"\n";
    Disco d2=Disco("Avatar", "electronica","Solido SSD 240GB");
    d2.tipodisco();
}