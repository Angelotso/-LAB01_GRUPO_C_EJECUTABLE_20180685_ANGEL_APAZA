#include <iostream>
#include<stdlib.h>
#include "May.h"
#include "dat.h"
#include "arch.h"
using namespace std;

/*
//EJERCICIO 1
template <class Tdate>
Numeros<Tdate> :: Numeros(Tdate _n1, Tdate _n2, Tdate _n3)
{
    n1=_n1;
    n2=_n2;
    n3=_n3;
}

template <class Tdate>
Tdate Numeros<Tdate>::Mayor()
{
    if (n1>n2 && n1>n3)
        return n1;
    else if(n2>n1 && n2>n3)
        return n2;
    else return n3;
}
template <class Tdate>
Tdate Numeros<Tdate>::Menor()
{
    if (n1<n2 && n1<n3)
        return n1;
    else if(n2<n1 && n2<n3)
        return n2;
    else return n3;
}
int main()
{
    Numeros<int>numbers(15,18,23);
    cout<<"el numero mayor es: "<<numbers.Mayor();
    cout<<"\n";
    cout<<"el menor numero es: "<<numbers.Menor();
    return 0;
}
*/


/*
//EJERCICIO 2
template <class N>
Operacion<N>::Operacion(N _n1, N _n2)
{
    n1=_n1;
    n2=_n2;
}
template <class N>
N Operacion<N>::Suma()
{
    cout<<"la suma de los numeros es: "<<n1+n2<<endl;
}
template <class N>
N Operacion<N>::Resta()
{
    if(n1>n2){
    cout<<"la resta de los numeros es: "<<n1-n2<<endl;
    }
    else if(n2>n1){
    cout<<"la resta de los numeros es: "<<n2-n1<<endl;
    }
}
template <class N>
N Operacion<N>::Multi()
{
    cout<<"la multiplicacion de los numeros es: "<<n1*n2<<endl;
}
template <class N>
N Operacion<N>::Divi()
{
    if(n1>n2){
    cout<<"la divison de los numeros es: "<<n1/n2<<endl;
    }
    else if(n2>n1){
    cout<<"la division de los numeros es: "<<n2/n1<<endl;
    }
}
int main()
{
    Operacion<int>nms(24,39);
    nms.Suma();
    nms.Resta();
    nms.Multi();
    nms.Divi();
    cout<<"\n";
    Operacion<float>num(25.32 , 42.85);
    num.Suma();
    num.Resta(),
    num.Multi();
    num.Divi();
    return 0;
}
*/

/*
//EJERCICIO 3
template <class Doc>
Formato<Doc>::Formato(Doc _letra)
{
    letra=_letra;
}
template <class Doc>
Doc Formato<Doc>::Imprimirle()
{
    cout<<letra<<endl;
}       
template <class Docu>
Complet<Docu>::Complet(Docu _apellido)
{
    apellido = _apellido;
}
template <class Docu>
Docu Complet<Docu>::Imprimirap()
{
    cout<<apellido<<endl;
}
int main()
{
    Formato<char>le('a');
    Complet<string>ap("apaza");
    le.Imprimirle();
    ap.Imprimirap();
}
*/
