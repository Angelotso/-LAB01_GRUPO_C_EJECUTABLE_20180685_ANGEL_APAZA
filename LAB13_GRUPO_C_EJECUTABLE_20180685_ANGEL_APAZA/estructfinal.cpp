#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

using namespace std;


/*EJERCICIO 1
Implementar un programa que maneje un arreglo de estructuras para almacenar
los nombres y las fechas de cumpleaños de sus n compañeros. Y debe mostrarse
por pantalla quienes cumplen años en este mes.*/
/*
struct fecha 
{
    int dia;
    int mes;
    int anio;
    //char nombre_mes[9];
};

struct jugadores
{
    char nombre[20];
    char apellido[20];
    struct fecha fe_cumple;
}jugadores[100];

int main()
{
    int n,Mes_act;
    cout<<"Cantidad de jugadoress: ";
    cin>>n;
    cout<<"Mes actual: ";
    cin>>Mes_act;
    cout<<"\n";
    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"Nombre: ";
        cin.getline(jugadores[i].nombre,20,'\n');
        cout<<"Apeliido: ";
        cin.getline(jugadores[i].apellido,20,'\n');
        cout<<"\n**fecha de nacimiento**"<<endl;
        cout<<" Dia :";
        cin>>jugadores[i].fe_cumple.dia;
        cout<<" Mes: ";
        cin>>jugadores[i].fe_cumple.mes;
        cout<<" Anio: ";
        cin>>jugadores[i].fe_cumple.anio;
        cout<<"\n";
    }

    for(int i=0;i<n;i++){
        cout<<"Nombre de la jugadores "<<i+1<<": "<<jugadores[i].nombre<<endl;
        cout<<"Apellido de la jugadores "<<i+1<<": "<<jugadores[i].apellido<<endl;
        cout<<"\n**FECHA DE CUMPLEAÑOS DE LA jugadores "<<i<<"**\n";
        cout<<" Dia: "<<jugadores[i].fe_cumple.dia<<endl;
        cout<<" Mes: "<<jugadores[i].fe_cumple.mes<<endl;
        cout<<" Anio: "<<jugadores[i].fe_cumple.anio<<endl;
        cout<<"\n";
    }

    cout<<"\n**LAS SIGUIENTES PERSONAS CUMPLEN ANIOS ESTE MES**\n";
    for(int i=0;i<n;i++){
        if(jugadores[i].fe_cumple.mes==Mes_act){
            cout<<"Nombre: "<<jugadores[i].nombre<<endl;
            cout<<"El dia: "<<jugadores[i].fe_cumple.dia<<endl;
            cout<<"\n";
        }
    }
    getch();
    return 0;
}*/


/* EJERCICIO 2
Implementar un programa que maneje un arreglo de estructuras que calcule la
nota final del Ciencia de la Computación. El programa debe permitir el ingreso
de cualquier cantidad de alumnos y para cada alumno, se podrá ingresar nombre,
grupo, nota de la primera fase, segunda fase, tercera fase y proyecto final. El
porcentaje de cada ítem es 15%, 20%, 25% y 40% respectivamente.*/
/*struct Notas
{
    float n1;
    float n2;
    float n3;
    float nta_proy;
};
struct Alumno
{
    struct Notas not_final;
    char nombre[20];
    char grupo[3];
}alumno[100];

int main()
{
    int n;
    float promedio=0;
    cout<<"numero de alumnos: ";
    cin>>n;

    for(int i=0; i<n;i++){
        fflush(stdin);
        cout<<"*** ALUMNO "<<i+1<<" ***"<<endl;
        cout<<"Nombre: ";
        cin.getline(alumno[i].nombre,20,'\n');
        cout<<"Grupo: ";
        cin>>alumno[i].grupo;

        cout<<"\n*** NOTAS ALUMNO "<<i+1<<" ***"<<endl;
        cout<<"Nota primera fase: ";
        cin>>alumno[i].not_final.n1;
        cout<<"Nota segunda fase: ";
        cin>>alumno[i].not_final.n2;
        cout<<"Nota tercera fase: ";
        cin>>alumno[i].not_final.n3;
        cout<<"Nota Proyecto Final: ";
        cin>>alumno[i].not_final.nta_proy;
        cout<<"\n";
    }

    for(int i=0;i<n;i++){
        cout<<"**PROMEDIO FINAL DEL ALUMN@ "<<alumno[i].nombre<<"**"<<endl;
        promedio=(alumno[i].not_final.n1*0.15)+(alumno[i].not_final.n2*0.2)+(alumno[i].not_final.n3*0.25)+(alumno[i].not_final.nta_proy*0.4);
        cout<<"es: "<<promedio<<endl;
        cout<<"\n";
    }
    getch();
    return 0;
}*/

//EJERCICIO 3
/*Implemente un programa que maneje un arreglo de estructuras que solicite el
nombre, edad y talla de 10 jugadores, debe mostrar por pantalla los que son
menores de 20 años y tienen una talla mayor a 1,70 mts de altura.*/
/*struct Persona
{
    char nombre[10];
    int edad;
    float talla;
}jugador[10];

int main()
{
    for(int i=0;i<10;i++){
        fflush(stdin);
        cout<<"*** JUGADOR "<<i+1<<" ***"<<endl;
        cout<<"Nombre: ";
        cin.getline(jugador[i].nombre,10,'\n');
        cout<<"Edad: ";
        cin>>jugador[i].edad;
        cout<<"Talla: ";
        cin>>jugador[i].talla;
        cout<<"\n";
    }

    cout <<"\n*** JUGADORES ESCOGIDOS***\n ";
    for(int i=0;i<10;i++){
        if(jugador[i].edad<20 && jugador[i].talla > 1.70){
            cout<<"Nombre: "<<jugador[i].nombre<<endl;
            cout<<"Edad: "<<jugador[i].edad<<endl;
            cout<<"Talla: "<<jugador[i].talla<<endl;
            cout<<"\n";
        }
    }
    getch();
    return 0;
}
*/

//EJERCICIO 4
/*Implemente un programa que maneje un arreglo de estructuras que solicite
nombre, sexo y sueldo de los empleados de una empresa y debe mostrar por
pantalla el menor y mayor sueldo.*/
/*
struct Persona
{
    char nombre[20];
    char sexo[20];
    double sueldo;
}empleado[100];
int main()
{
    int n;
    cout<<"Numero de empleados: ";
    cin>>n;

    for(int i =0;i<n;i++){
        cout<<"\n***EMPLEADO NUMERO "<<i+1<<" ***"<<endl;
        fflush(stdin); 
        cout<<"Nombre: ";
        cin.getline(empleado[i].nombre,20,'\n');
        cout<<"Sexo: ";
        cin.getline(empleado[i].sexo,20,'\n');
        cout<<"Sueldo: ";
        cin>>empleado[i].sueldo;
        cout<<"\n";
    }

    int su_may=empleado[0].sueldo;
    int su_men=empleado[0].sueldo; 
    for(int i=0; i<n; i++){
        if (empleado[i].sueldo>=su_may){
            su_may=empleado[i].sueldo;
        }
        else if (empleado[i].sueldo<=su_men){
            su_men=empleado[i].sueldo;
        }    
    }

    for(int i=0; i<n; i++){
        if (su_may==empleado[i].sueldo){
            cout<<"\n*** EMPLEADO(A) CON MAYOR SUELDO*** \n";
            cout<<"Nombre: "<<empleado[i].nombre<<endl;
            cout<<"con un salario de: $"<<empleado[i].sueldo<<endl;
        }
        if (empleado[i].sueldo==su_men){
            cout<<"\n*** EMPLEADO(A) CON MENOR SUELDO *** \n";
            cout<<"Nombre: "<<empleado[i].nombre<<endl;
            cout<<"con un salario de: $"<<empleado[i].sueldo<<endl;
        }    
    }
    getch();
    return 0;
}*/