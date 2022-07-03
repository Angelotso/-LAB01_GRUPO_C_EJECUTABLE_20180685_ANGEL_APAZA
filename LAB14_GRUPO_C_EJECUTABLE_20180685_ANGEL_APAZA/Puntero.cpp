#include<iostream>
#include<string.h>
#include "tienda.h"


void Tienda::InsertarProducto(string data)
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
void Tienda::EliminarProducto(int pos)
{
	if (head == NULL){
		cout<<"Lista vacia"<<endl;
	}
	else{
		Nodo *temp, *ptr;
		if (pos == 0) {
			cout<<"Producto eliminado: "<<head->data<<endl;
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
	        cout<<"Producto eliminado: "<<ptr->data<<endl;
		    temp->sig = ptr->sig;
		    free(ptr);
	    }
    }		
}
void Tienda::BuscarProducto(int pos)
{
	Nodo *act = new Nodo();
	act = head;
    string busqueda;
	bool encontrar = false;
	cout<<"Producto a buscar: ";
    cin>>busqueda;
	if (head!=NULL ){
		while(act!=NULL ){
		    if(act->data == busqueda){
		        cout<<"Producto encontrado\n"<<busqueda;
			    encontrar=true;
			}
			act=act->sig;
		}
		if(encontrar ==false){
			    cout<<"Producto no encontrado\n";
		}
	}
	else{
		cout<<"Tienda vacia\n";
	}
}
void Tienda::ImprimirTienda()
{
	if (head == NULL){
		cout<<"Lista vacia"<<endl;
	}
	else{
		Nodo *temp = head;
		cout<<"Lista: ";
		while (temp != NULL){
			cout<<temp->data<<"//";
			temp = temp->sig;
		}
	}
}
int main() {
	Tienda tienda;
    int cantidad[100],codigo[100];
	int opc,pos;
	do{
		cout<<"\n(1) Insertar producto";
		cout<<"\n(2) Eliminar producto";
		cout<<"\n(3) Buscar producto";
		cout<<"\n(4) Imprimir productos";
		cout<<"\n(5) Salir";
		cout<<"\nOpcion: ";
		cin>>opc;

		if(opc==1){
			string p;
            int i=0;
            cout<<"Nombre del producto:  ";
			cin>>p;
            cout<<"cantidad: ";cin>>cantidad[i];
            cout<<"codigo del producto: ";cin>>codigo[i];
            i++;
			tienda.InsertarProducto(p);
        }
        else if(opc==2){
			tienda.EliminarProducto(pos);
		}
		else if(opc==3){
			cout<<"Posicion del producto: ";
			cin>>pos;
            int i;
			tienda.BuscarProducto(pos);
            cout<<"cantidad: "<<cantidad[i];
            cout<<"codigo: "<<codigo[i];
            i++;
		}
		else if(opc==4){
			tienda.ImprimirTienda();
		}				
	}while(opc != 5);
}