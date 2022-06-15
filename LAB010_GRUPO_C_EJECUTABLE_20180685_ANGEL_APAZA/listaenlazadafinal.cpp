#include <iostream>
#include "list.h"

using namespace std;
/*EJERCICIO 2
Con la implementación de la lista enlazada anterior, desarrolle una función que
permita ingresar los elementos al inicio de todos los demás elementos. Tendrá que
modificar el comportamiento del puntero que tiene referencia al primer elemento
para que sea redireccionado al nuevo elemento por ingresar.*/
void Lista::InsertarNodoInicial(int data)
{
	Nodo *temp = new Nodo();
	temp->data = data;
	temp->sig = head;
	head = temp;
}		
/*EJERCICIO 1
Defina una lista enlazada que permita insertar elementos al final de todos los
elementos que ya se hayan ingresado. Por el momento no es necesario preservar un
orden, simplemente los elementos nuevos deben de ingresar como el último
elemento.*/
void Lista::InsertarNodoFinal(int data)
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
/* EJERCICIO 3
Desarrolle una función que permita ingresar elementos en el medio de dos
elementos de la lista enlazada, como se muestra en la siguiente imagen. Solicite que
se ingrese una posición válida dentro de la lista y permita que el valor ingresado se
pueda anexar en esa posición.*/		
void Lista::InsertarNodoMedio(int data, int pos)
{
	Nodo *temp = new Nodo();
	temp->data = data;
	if (pos == 0){
		temp->sig = head;
		head = temp;
	}
	else{
		Nodo *ptr = head;
		while(pos>1) {
			ptr = ptr->sig;
			--pos;
		}
		temp->sig = ptr->sig;
		ptr -> sig = temp;
	}
}
/*EJERCICIO 5 
Desarrolle una función que permita eliminar el primer elemento de una lista sin
perder referencia de los demás elementos que ya se encuentran almacenados en la
estructura .(Evite copiar los elementos en una nueva lista para completar la
eliminación de los elementos)*/
void Lista ::EliminarNodoInicial()
{
	if (head == NULL){
		cout<<"Lista vacia"<<endl;
	}
	else{
		cout<<"Numero eliminado: "<<head->data<<endl;
		Nodo *temp = head;
		head = head->sig;
		delete(temp);
	}
}
/*EJERCICIO 4
Elabore una función que permita eliminar el último elemento de una lista enlazada.
(Evite copiar los elementos en una nueva lista para completar la eliminación del
elemento )*/
void Lista::EliminarNodoFinal()
{
	if (head == NULL){
		cout<<"Lista vacia"<<endl;
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
/*EJERCICIO 6 
Dado una posición válida dentro de la lista, permita al usuario eliminar un elemento
de cualquier posición sin perder referencia de los demás elementos.*/		
void Lista::EliminarporPosicion(int pos)
{
	if (head == NULL){
		cout<<"Lista vacia"<<endl;
	}
	else{
		Nodo *temp, *ptr;
		if (pos == 0) {
			cout<<"Numero eliminado: "<<head->data<<endl;
			ptr = head;
			head= head->sig;
			delete(ptr);
		}
	    else{
		    temp = ptr = head;
		    while(pos>0){
			    --pos;
			    temp = ptr;
			    ptr = ptr->sig;
		    }
	        cout<<"Numero eliminado: "<<ptr->data<<endl;
		    temp->sig = ptr->sig;
		    free(ptr);
	    }
    }		
}

void Lista::ImprimirLista()
{
	if (head == NULL){
		cout<<"Lista vacia"<<endl;
	}
	else{
		Nodo *temp = head;
		cout<<"Lista: ";
		while (temp != NULL){
			cout<<temp->data<<"->NULL";
			temp = temp->sig;
		}
	}
}	
int main() {
	Lista list;
	int opc,pos;
	do{
		cout<<"\n(1) Insertar nodo inicio";
		cout<<"\n(2) Insertar nodo final";
		cout<<"\n(3) Insertar entre dos nodos";
		cout<<"\n(4) Eliminar nodo inicial";
		cout<<"\n(5) Eliminar nodo final";
		cout<<"\n(6) Eliminar por posicion";
		cout<<"\n(7) Imprimir lista";
		cout<<"\n(8) Salir";
		cout<<"\nOpcion: ";
		cin>>opc;

		if(opc==1){
			int num;
            cout<<"Valor del nodo:  ";
			cin>>num;
			list.InsertarNodoInicial(num);
        }
		else if(opc==2){
			int num;
            cout<<"Valor del nodo:  ";
			cin>>num;
			list.InsertarNodoFinal(num);
		}
		else if(opc==3){
			int num;
            cout<<"Valor del nodo:  ";
			cin>>num;
			cout<<"Posicion: ";
			cin>>pos;
			list.InsertarNodoMedio(num,pos);
		}
		else if(opc==4){
			list.EliminarNodoInicial();
		}
		else if(opc==5){
			list.EliminarNodoFinal();
		}
		else if(opc==6){
			cout<<"Posicion: ";
			cin>>pos;
			list.EliminarporPosicion(pos);
		}
		else if(opc==7){
			list.ImprimirLista();
		}				
	}while(opc != 8);
}			
