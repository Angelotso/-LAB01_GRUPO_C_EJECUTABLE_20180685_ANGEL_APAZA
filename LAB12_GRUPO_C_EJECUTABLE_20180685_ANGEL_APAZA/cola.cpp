#include <iostream>
#include<stdlib.h>
#include "Cola.h"

using namespace std;
/*EJERCICIO 1
 Defina una Cola que permita insertar elementos utilizando clases.*/
void Cola::InsertarElemento(int data)
{
	Nodo *temp = new Nodo();
	temp->data = data;
	if (head == NULL){
		head = temp;
	}
	else{
	    Nodo *ptr = head;
		while (ptr->sig != NULL){
		    ptr = ptr->sig;
		}
		ptr->sig = temp;
	}
}
/*EJERCICIO 2
Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una
Cola.*/
void Cola::ElimarElemento()
{
	if (head == NULL){
		cout<<"Cola esta vacia"<<endl;
	}
	else{
		cout<<"Numero eliminado:\n"<<head->data<<endl;
		Nodo *temp = head;
		head = head->sig;
		delete(temp);
	}
}
/*EJERCICIO 3
Implemente un algoritmo para buscar elementos de la Cola.*/
void Cola::BuscarElemento()
{
    int busqueda;
	Nodo *act = new Nodo();
	act = head;
	bool encontrar = false;
	cout<<"Elemento a buscar: ";
    cin>>busqueda;
	if (head!=NULL){
		while(act!=NULL && busqueda != true){
		    if(act->data == busqueda){
		        cout<<"Elemento encontrado\n"<<busqueda;
			    encontrar=true;
			}
			act=act->sig;
		}
		if(encontrar ==false){
			    cout<<"Elemento no encontrado\n";
		}
	}
	else{
		cout<<"Cola esta vacia\n";
	}

}
void Cola::ImprimirCola()
{
    if (head == NULL){
		cout<<"Cola esta vacia"<<endl;
	}
	else{
		Nodo *temp = head;
		cout<<"Cola: ";
		while (temp != NULL){
			cout<<temp->data<<"->";
			temp = temp->sig;
		}
	}
}
int main()
{
    int opc;
    Cola cola;    	
    do{
		cout<<"\n(1) Insertar Elemento";
		cout<<"\n(2) Eliminar Elemento";
		cout<<"\n(3) Buscar Elemento ";
		cout<<"\n(4) Imprimir la Cola";
		cout<<"\n(5) Salir";
		cout<<"\nOpcion: ";
		cin>>opc;
		if(opc==1){
			int num;
			cout<<"Ingresar el valor a insertar: ";
            cout<<"\n";
            cin>>num;
			cola.InsertarElemento(num);           
		}		
        else if(opc==2){
            cola.ElimarElemento();
		}
		else if(opc==3){
			cola.BuscarElemento();
        	}
		else if(opc==4){
			cola.ImprimirCola();
		}				
	}while(opc!=5);
}