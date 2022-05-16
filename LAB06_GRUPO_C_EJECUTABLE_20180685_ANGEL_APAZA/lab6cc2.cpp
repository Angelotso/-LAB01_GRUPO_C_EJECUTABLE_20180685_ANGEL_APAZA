//#include "rectan.h"
//#include "alum.h"
//#include "Person.h"
#include "busq.h"
#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
/*
//EJERCICIO 1
Rectangulo::Rectangulo(int _base, int _altura)
{
    base = _base;
    altura = _altura;
}
Rectangulo::~Rectangulo()
{
}
void Rectangulo::Area()
{
    cout<<"el area del rectangulo es "<<base*altura<<endl;
}
void Rectangulo::Perimetro()
{
    float _per;
    _per=(base*2) + (altura*2);
    cout<<"el perimtro del rectangulo es "<<_per<<endl;
}
int main(){
    Rectangulo r1 = Rectangulo(15 , 26);
    r1.Area();
    r1.Perimetro();
    system("pause");
    return 0; 
}
*/

/*
//EJERCICIO 2
Alumno::Alumno(int _CUI, string _nombre,string _ape,int _n1,int _n2,int _n3)
{
    CUI= _CUI;
    nombre= _nombre;
    apellido= _ape;
    n1= _n1;
    n2= _n2;
    n3= _n3;
}
Alumno::~Alumno()
{
}
void Alumno:: Imprimir()
{
    cout<<"nombre completo: "<<nombre + apellido<<endl;
    cout<<"CUI : "<<CUI<<endl;
    cout<<"Primer nombre : "<<nombre<<endl;
}
void Alumno::Parciales()
{
    float _profinal;
    _profinal = (n1+n2+n3)/3;
    cout<<"El promedio de sus notas es "<<_profinal<<endl;

    if(_profinal<10.5){
        cout<<"El alumno no aprobo  la asignatura de ciencias de la computacion";
    }
    else {
        cout<<"El alumno aprobo  la asignatura de ciencias de la computacion";
    }
}
int main()
{
    Alumno a1= Alumno (20180685, "Angel"," Apaza Quispe", 15, 05, 13 );
    a1.Imprimir();
    a1.Parciales();
    return 0;
}
*/

/*
//EJERCICIO 3
Persona::Persona(string _nombre, int _dia, int _mes, int _anio)
{
    nombre= _nombre;
    dia= _dia;
    mes= _mes;
    anio = _anio;
}
Persona::~Persona()
{
}
void Persona::FechaNacimiento()
{
    int _diactual=15;
    int _mesactual=05;
    int _anioactual=2022;
    cout <<"Fecha de hoy -> "<<_diactual<<" - "<<_mesactual<<" - "<<_anioactual<<endl;
    cout<<"Nombre : "<<nombre<<endl;
    cout<<"Fecha de nacimiento -> "<<dia<<" - "<<mes<<" - "<<anio<<endl;
    cout <<"la edad de la persona es : " <<_anioactual - anio<<endl;
}
int main()
{
    Persona p1= Persona ("Alberto Supo Tito", 18, 06 , 1985);
    p1.FechaNacimiento();
    return 0;
}
*/


/*
//EJERCICIO 5
Matriz::Matriz(int _filas, int _columnas)
{
    filas= _filas;
    columnas= _columnas;
}
Matriz::~Matriz()
{
}
void Matriz::Llenarmatriz()
{
    int _matriz[filas][columnas];
    srand(time(NULL));
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            _matriz[i][j]= rand() % 9;
        }
    }

    //mostrando la matriz
    cout<<"*****MATRIZ******\n";
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<" "<<_matriz[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

void Matriz::Bucarelemento()
{
    bool buscar=false;
    int _matriz[filas][columnas];
    int num;
    cout<<"numero a buscar : ";
    cin>>num;

    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            if(_matriz[i][j]==num){
                filas=i;
                columnas=j;
                buscar=true;
            }
        }
    }
    if (buscar == true){
        cout<<"elemento "<<num<<" esta en la posicion "<<"["<<filas<<"]"<<"["<<columnas<<"]"<<endl;
    }
    else{
        cout<<"valor no econtrado";
    }
}
int main()
{
    Matriz m1= Matriz(3,3);
    m1.Llenarmatriz();
    m1.Bucarelemento();
    return 0;
}
*/