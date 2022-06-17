#include<iostream>
#include<stdlib.h>
#include "pila.h"
using namespace std;

void Pila::Push(int data)
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
void Pila::Pop()
{
	if (head == NULL){
		cout<<"pilaa vacia"<<endl;
	}
	else if (head->sig == NULL){
		cout<<"Numero eliminado: "<<head->data<<endl;
		delete(head);
		head = NULL;
	}
	else{
		Nodo *temp = head;
		while (temp->sig->sig != NULL) {
			temp = temp->sig;
		}
		cout<<"Numero eliminado: "<<temp->sig->data<<endl;
		delete(temp->sig);
		temp->sig = NULL;
	}					
}
void Pila::Buscar()
{
	Nodo *act = new Nodo();
	act = head;
    int busqueda;
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
		cout<<"Pila vacia\n";
	}

}
void Pila::ImprimirPila()
{
	if (head == NULL){
		cout<<"pila vacia\n"<<endl;
	}
	else{
		Nodo *temp = head;
		cout<<"Pila: ";
		while (temp != NULL){
			cout<<temp->data<<"->";
			temp = temp->sig;
		}
	}
}	
int main()
{
    int opc;
    Pila pila;
    	do{
		cout<<"\n(1) Insertar";
		cout<<"\n(2) Eliminar";
		cout<<"\n(3) Buscar ";
		cout<<"\n(4) Imprimir";
		cout<<"\n(5) Salir";
		cout<<"\nOpcion: ";
		cin>>opc;
		if(opc==1){
			int num;
			cout<<"Valor: ";
            cin>>num;
			pila.Push(num);           
		}		
        else if(opc==2){
            pila.Pop();
		}
		else if(opc==3){
			pila.Buscar();
        	}
		else if(opc==4){
			pila.ImprimirPila();
		}				
	}while(opc!=5);
}
