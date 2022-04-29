#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;
/*
//EJERCICIO 1
int potencia(int numero,int pot)
{
    int res=numero;
    while(pot>1){
        res=res*numero;
        pot--;
    }
    return res;
}
int main()
{
    int numero,pot;
    cout<<"numero: ";
    cin>>numero;
    cout<<"exponente: ";
    cin>>pot;
    cout<<"resultado: "<<potencia(numero,pot);
}
*/

/*
//EJERCICIO 2
void bisiesto(int anio)
{
    if(anio%4==0){
        cout<<"el anio "<<anio<<" si es bisiesto";
    }
    else
        cout<< "no es bisiesto";
}
int main()
{
    int anio;
    cout<<"Anio: ";
    cin>>anio;
    bisiesto(anio);
}
*/



//EJERCICIO 4
bool Nprimos(int a)
{
    bool siprimo;
    if(a!=1 && a!=0){
        for(int i=2; i<=a; i++){
            if(a%i==0){
                if(a==i){
                    siprimo=true;
                }
                else{
                    siprimo=false;
                    return siprimo;
                }
            }
        }
    }
    else
        siprimo = false;

    return siprimo;
}
int main()
{
    int a;
    cout<<"ingrese un numero: ";
    cin>>a;
    for (int i=0;i<=a;i++){
        if(Nprimos(i)) 
            cout<<i<<endl;
    }
}
