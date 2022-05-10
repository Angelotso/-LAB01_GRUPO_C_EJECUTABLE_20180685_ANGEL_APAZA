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
    int personas[5];
    string nombre[3];
    int edad[3], DNI[3];
    
    cout<<"*****NOMBRES***** \n";
    for(int i=0; i<3; i++){
        cout<<"nombre de la persona "<<i+1<<" : ";
        getline(cin,nombre[i]);
    }

    cout<<"\n *****EDADES***** \n";
    for(int i=0; i<3; i++){
        cout<<"edad de la persona "<<i+1<<" : ";
        cin>>edad[i];
    }

    cout<<"\n *****DOCUMENTOS***** \n";
    for(int i=0; i<3; i++){
        cout<<"DNI de la persona "<<i+1<<" : ";
        cin>>DNI[i];
    }

    cout<<"\n******DATOS COMPLETOS******\n";
    for(int i=0; i<3; i++){
        cout<<"\nDATOS DE LA PERSONA "<<i+1<<endl;
        cout<<"Nombre: "<<nombre[i]<<endl;
        cout<<"Edad: "<<edad[i]<<endl;
        cout<<"DNI: "<< DNI[i]<<endl;
    }
}
*/

/*
//EJERCICIO 2
int main()
{
    int arr[8];
    int num, band=0;

    for(int i=0; i<8; i++){
        cout<<"numero ["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<"nuemro a buscar: ";
    cin>>num;

    for(int i=0;i<8;i++){
        if(arr[i]==num){
            cout<<"Elemento encontrado en la posicion "<<i;
            band=1;
        }
    }
    if(band==0){
        cout<<"no se encontro el elemento";
    }
}
*/

/*
//EJERCICIO 3
int main()
{
    int matriz[5][3];

    for(int i=0 ;i<5; i++){
        for(int j=0; j<3; j++){
            cout<<"elemento ["<<i<<"]"<<"["<<j<<"] = ";
            cin>>matriz[i][j];
        }
    }
    cout<<"\nMOSTRANDO MATRIZ:\n";
    for(int i=0 ;i<5; i++){
        for(int j=0; j<3; j++){
            cout<<" "<<matriz[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n***SUMA DE FILA PAR****\n";
    for(int i=0 ;i<5; i++){
        int cont=0;
        if(i%2==0){
            for(int j=0; j<3; j++){
                cont = cont + matriz[i][j];
            }
            cout<<"suma de la fila "<<i<<" = "<<cont<<endl;
        }
    }
}
*/

/*
//EJERCICIO 4
int main()
{
    int arr[100];
    for( int i=100; i>=2; i-- )
    {
        bool primo = true;
        int max = i/2;
        for( int j=2; j<=max; j++ )
        {
            if(i%j==0) 
            {
                primo = false;
                break;
            }
        }
        if(primo)
        {
            cout<<" "<<i;
        }
    }
    return 0;
}
*/


//EJERCICIO 6
int main()
{
    int matriz[3][3];
    int arr[3];
    for(int i=0 ;i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"elemento ["<<i<<"]"<<"["<<j<<"] = ";
            cin>>matriz[i][j];
        }
    }
    cout<<"\nMOSTRANDO MATRIZ:\n";
    for(int i=0 ;i<3; i++){
        for(int j=0; j<3; j++){
            cout<<" "<<matriz[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n***SUMA DE CADA FILA****\n";
    for(int i=0 ;i<3; i++){
        int cont=0;
        for(int j=0; j<3; j++){
            cont = cont + matriz[i][j];
            arr[i]=cont;
        }
        cout<<"suma de la fila "<<i<<" = "<<cont<<endl;
    }
    int may = arr[0];
    for (int i = 0; i < 3; i++){
        if(arr[i]>=may){
            may = arr[i];
        }
    }
    for(int k=0;k<3;k++){
        if(may==arr[k]){
            cout<<"la fila de la suma mayor es "<<k;
        }
    }
    cout<<"\nla mayor suma es "<<may;
    return 0;
}
