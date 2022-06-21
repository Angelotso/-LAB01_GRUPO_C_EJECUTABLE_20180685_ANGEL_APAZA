#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

using namespace std;
//EJERCICIO 1
struct fecha 
{
    int dia;
    int mes;
    int anio;
    //char nombre_mes[9];
};

struct persona
{
    char nombre[20];
    char apellido[20];
    struct fecha fe_cumple;
}persona[100];

int main()
{
    int n;
    cout<<"Cantidad de personas: ";
    cin>>n;
    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"Nombre: ";
        cin.getline(persona[i].nombre,20,'\n');
        cout<<"Apeliido: ";
        cin.getline(persona[i].apellido,20,'\n');
        cout<<"\n**fecha de cumpleaños de la persona**"<<endl;
        cout<<" Dia :";
        cin>>persona[i].fe_cumple.dia;
        cout<<" Mes: ";
        cin>>persona[i].fe_cumple.mes;
        cout<<" Anio: ";
        cin>>persona[i].fe_cumple.anio;
        cout<<"\n";
    }

    for(int i=0;i<n;i++){
        cout<<"Nombre de la persona "<<i+1<<": "<<persona[i].nombre<<endl;
        cout<<"Apellido de la persona "<<i+1<<": "<<persona[i].apellido<<endl;
        cout<<"\n**FECHA DE CUMPLEAÑOS DE LA PERSONA "<<i<<"**\n";
        cout<<" Dia: "<<persona[i].fe_cumple.dia<<endl;
        cout<<" Mes: "<<persona[i].fe_cumple.mes<<endl;
        cout<<" Anio: "<<persona[i].fe_cumple.anio<<endl;
        cout<<"\n";
    }
    getch();
    return 0;
}