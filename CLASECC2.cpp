#include <iostream>
#include <time.h>
#include <string.h>
#include <math.h>

using namespace std;


/*
//EJERCICIO 1:
int main()
{
    int a,b;
    cout<<"1er numero: ";
    cin>>a;
    cout<<"2do numero: ";
    cin>>b;

    int producto = a*b;

    cout<<"el producto es: "<<producto<<endl;
}
*/

/*
//EJERCICIO 2:
int main()
{
    string nombre;
    cout<<"primer nombre: ";
    cin>>nombre;

    string apellidoPA;
    cout<<"apellido paterno: ";
    cin>>apellidoPA;

    string apellidoMA;
    cout<<"apellido materno: ";
    cin>>apellidoMA;

    string letra;
        letra = nombre[0];

    string ape;
        ape = apellidoMA[0];

    cout <<endl;

    cout<<"Mi corre insitucional es: "<<letra<<apellidoPA<<ape<<"@unsa.edu.pe";
}
*/


/*
//EJERCICIO 3:
int main()
{
    string tiempo;
        int hora,min,seg,minasum;
        int todominutos,hOut,mOut,sOut;
   
        cout<<"Digite la hora (24hrs): ";
        cin>>hora;
        cout<<"Digite los minutos: ";
        cin>>min;
        cout<<"DIgite segundos: "<<;
        cin>>seg;

    todominutos = hora*3600+(min*60)+seg;
    
    cout<<"Digite los segundos a sumar: ";
    cin>>segsum;
    
    
    soloSegundos += segsum;
    
    hOut = soloSegundos / 3600;
    mOut = ((soloSegundos /60)-(hOut*60));
    sOut=(soloSegundos-(mOut*60)-(hOut*3600));
    cout<<"Horas:  "<<hOut;
    cout<<"  Minutos:"  <<mOut;
    cout<<"  Segundos:  "<<sOut<<endl;
    system("PAUSE");
}
*/


// EJERCICO 7
int main()
{
    int a,b;
    cout<<"ingrese el primer numero: ";
    cin>>a;
    cout<<"ingrese el segundo numero: ";
    cin>>b;

    if(a > b){
        if(a % b == 0) 
            cout<<"el numero "<<b<<" es divisor de "<<a<<endl;
        else
            cout<<"no se pueden dividir";
    }
    else if (b > a){
        if (b % a == 0)
            cout<<"el numero"<<a<<" es divisor de "<<b<<endl;
        else 
            cout<<"no se pueden dividir";
    }
    else if(a=b){
        cout<<"son divisores ensi mismo"<<endl;
    }
    else{
        cout<<"no son divisores";
    }
}