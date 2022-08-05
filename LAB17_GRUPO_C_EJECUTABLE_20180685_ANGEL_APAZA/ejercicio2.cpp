#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

template <class T> class ABB;

template<class T>
class Nodo 
{
    public:
    Nodo(const T dat, Nodo<T> *izq=NULL, Nodo<T> *der=NULL) :
    dato(dat), izquierdo(izq), derecho(der) {}
    T dato; 
  	Nodo<T> *izquierdo; 
    Nodo<T> *derecho;
    friend class ABB<T>;//amigos de la clase lista para poder usar los ndos como parametros
};

template<class T>
class ABB 
{
	private:   
   		Nodo<T> *raiz; // Declaración la raíz del árbol
   		Nodo<T> *actual; // Declaracion del nodo actual del arbol
   		int contador; // Variable de tipo entero para contar la cantidad de nodos del árbol
	public:
    	ABB() : raiz(NULL), actual(NULL) {}
   		~ABB() { Podar(raiz); }
   		void Insertar(const T dat);
   		void Ordenar(void (*func)(T&) , Nodo<T> *nodo=NULL, bool r=true);
   		const int NumeroNodos();
   		bool Vacio(Nodo<T> *r) { return r==NULL; }
   		T &ValorActual() { return actual->dato; }// Retorna el valor que contiene el nodo actual:
   		void Raiz() { actual = raiz; }
   		void Podar(Nodo<T>* &); // Función auxiliar para eliminar todos los nodos del árbol a partir de uno
   		void auxContador(Nodo<T>*);//Función auxiliar para contar la cantidad de nodos del árbol
};

template<class T>
void ABB<T>::Podar(Nodo<T>* &nodo)
{
   if(nodo) {
      Podar(nodo->izquierdo); // Podar izquierdo
      Podar(nodo->derecho);   // Podar derecho
      delete nodo;            // Eliminar nodo
      nodo = NULL;
   }
}

template<class T>
void ABB<T>::Insertar(const T dat)
{
   Nodo<T> *padre = NULL;

   actual = raiz;// Buscar el dato en el árbol, manteniendo un puntero al nodo padre
   while(!Vacio(actual)){ 
      padre = actual;
      if(dat >= actual->dato) actual = actual->derecho;
      else if(dat < actual->dato) actual = actual->izquierdo;
	}
	if(!Vacio(actual)) return;
   // Si padre es NULL, entonces el árbol estaba vacío, el nuevo nodo será
   // el nodo raiz
   	if(Vacio(padre)) raiz = new Nodo<T>(dat);
   // Si el dato es menor que el que contiene el nodo padre, lo insertamos
   // en la rama izquierda
   	else if(dat < padre->dato) padre->izquierdo = new Nodo<T>(dat);
   // Si el dato es mayor que el que contiene el nodo padre, lo insertamos
   // en la rama derecha
   	else if(dat >= padre->dato) padre->derecho = new Nodo<T>(dat);
}


template<class T>
void ABB<T>::Ordenar(void (*func)(T&), Nodo<T> *nodo, bool r)
{
	if(r) nodo = raiz;
	func(nodo->dato);
	if(nodo->izquierdo) Ordenar(func, nodo->izquierdo, false);
	if(nodo->derecho) Ordenar(func, nodo->derecho, false);
}

template<class T>
void ABB<T>::auxContador(Nodo<T> *nodo)
{
   contador++;  
   if(nodo->izquierdo) auxContador(nodo->izquierdo); //recorrido por la izquierda
   if(nodo->derecho)   auxContador(nodo->derecho);//recorrido por la derecha
}

template<class T>
const int ABB<T>::NumeroNodos()
{
   contador = 0;
   if (raiz != NULL){
        auxContador(raiz); // Función auxiliar de contador para realizar el conteo de los nodos
		return contador;  //retorna la cantidad de nodos que tiene el árbol
	} 
	else{
        return 0;
	}  
}

template <class T>
void Mostrar(const T dat)
{
    cout << dat << ", "; 
}

ABB<int> ArbolEnteros;

void menu();
void Crear_Arbol();
void Mortrar_arbol();

int main()
{
    menu();
    system("PAUSE");
    return 0;
}
void Crear_Arbol()
{
    ArbolEnteros.~ABB();       
  	int n;  
    int dato; 

    cout << " Ingrese el numero de nodos deseados para el arbol:  ";
    cin >> n;
	cout << endl;

    for(int i=0; i<n; i++){
        cout << " Ingrese el nodo " << i+1 << " : ";
        cin >> dato;
        ArbolEnteros.Insertar(dato);
	}
	cout<<"\n";
	menu();
}
void Mortrar_arbol()
{
    int Cantidad_nodos = ArbolEnteros.NumeroNodos();
         
    if (Cantidad_nodos==0){
        cout <<"\n"<< " No se puede mostrar el recorrido del arbol porque el mismo esta vacio.\n";
    }
    else{
		cout<<"\n**** MOSTRANDO ARBOL (PREORDEN) ****\n";                                      
        ArbolEnteros.Ordenar(Mostrar);
	}
	cout<<"\n";
	menu();
}                                                   
void menu()
{
	cout<<"***** ARBOL BINARIO ******";
	cout<<"\n1.Crear arbol.";
	cout<<"\n2.Mostrar arbol.";
	cout<<"\n3.Salir.";
	char eleccion;
    while (true){
        cout<<"\n"<<"\n"<<"operacion a realizar: ";
        cin>>eleccion;
        system("cls");
        if (eleccion == '1'){ 
            //system("cls"); 
            Crear_Arbol(); 
        }  
        else if(eleccion == '2'){          
			//system("cls");           
            Mortrar_arbol();                   
        }
		else if(eleccion == '3'){
            exit(0); 
        }
		else{
            cout<<"\n"<<"LA OPCION MARCADA ES INVALIDA"<<endl;; 
            menu();         
        }
	}
}
