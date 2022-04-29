#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;
/*
//EJERCICIO 1
int main()
{
    int suma=0;
    for (int i=2;i<=100;i++){
        if(i % 2 == 0)
            suma=suma+i;
    }
    cout<<"la suma de los enteros pares es: "<<suma;

    return 0;
}
*/
/*
//EJERCICIO 2
int main()
{
    int numero;
    cout<<"cantidad de numeros primos a mostrar: ";
    cin>>numero;
    bool primo = true;
    int cont=0;
    int pri[100];
    for(int i=2; i<=numero; i++){
        if(numero % i == 0) primo = false;
        cin>>pri[i];
        cont = cont + pri[i];
    }
    if(primo==true);
    cout<< cont;

    return 0;
}
*/

/*
//EJERCICIO 3
int main ()
{
    int cont=0;
    for (int i=1;i<100;i++){
        if (i%5==0)
        cout<<i<<" ";
    }
}
*/

/*
//EJERCICIO 5
int main()
{
    int numero[50];
    int n;
    int nma, nme, suma=0;
    float promedio=0;
    cout<<"ingrese la cantidad de numeros: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        cout<<i+1<<" numero"<<": ";
        cin>>numero[i];
        suma = suma + numero[i];
    }
    promedio = suma/n;
    nme=numero[0];
    nma=numero[0];
    for(int i=0; i<n; i++){
        if(numero[i]>nma){
            nma=numero[i];
        }
        if (numero[i]<nme){
            nme=numero[i];
        }
    }

    for(int i = 0; i < n; i++){
        cout<<"numero["<<i<<"]"<<": "<<numero[i]<<endl;
    }
    cout<<"la media es: "<<promedio<<endl;
    cout<<"numero mayor es: "<<nma<<endl;
    cout<<"numero menor es: "<<nme<<endl;
}
*/

/*
//EJERCICIO 6
int main()
{
    int fibo[100];
    int num;
    cout<<"numero hasta: ";
    cin>>num;
    fibo[0]=0;
    fibo[1]=1;
    cout<<fibo[0]<<" ";
    cout<<fibo[1]<<" ";
    for(int i=2; i<num;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    for(int i=2; i<num ;i++){
        cout<<fibo[i]<<" ";
    }
}
*/
/*
//EJERCICIO 7
int main()
{
    int est;
    float suma=0;
    cout<<"numero de estudiantes: ";
    cin>>est;
    int notas;
    for(int i=0; i<est; i++){
        cout<<"notas del alumno "<<i+1<<" :"<<endl;
        for (int j=0;j<3;j++){
            cout<<j+1<<" nota: ";
            cin>>notas;
            suma=suma+notas;
        }
        cout <<"promedio del alumno "<<i+1<<" es: "<<suma/3<<endl;
        suma=0;
    }
    return 0;
}
*/
/*
//EJERICIO 8
int main()
{
    int numero;
    cout<<"ingrese el numero: ";
    cin>>numero;
    for(int i=1 ;i<=12;i++)
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    return 0;
}
*/

//EJERCICIO 10
int main()
{
    string palabra;
    int pal;
    cout<<"diga palabra: ";
    cin>>palabra;
    pal = palabra.size();

    for(int i=pal-1; i>=0;i--){
        cout<<"la letra "<<i+1<<": "<<palabra[i]<<endl;
    }
    return 0;
}