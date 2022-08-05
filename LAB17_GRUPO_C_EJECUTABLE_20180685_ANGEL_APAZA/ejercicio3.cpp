#include<iostream>

template <class T>
class Contenedor//clase para cualquier tipo de dato (int,float,double)
{
    T elemento;//elemento a almacenar
    public:
        Contenedor(T arg){
            elemento = arg;
        }
        T add (){return ++elemento;}//incrementa el elemento +1
};

template<>
class Contenedor<char>{//clase solo para char
    char elemento;
    public:
        Contenedor (char arg){
            elemento=arg;
        }
        char uppercase(){ //Proceso para cambiara una letra minuscula a una mayuscula
            if ((elemento>='a')&&(elemento<='z')){
                elemento += 'A'-'a';
            }
            return elemento;//devuelev el elemento
        }
};
int main()
{
    Contenedor<int>cin(5);//manda a la funcion contenedor de enteros 
    Contenedor<char>cchar('t');//cumple la funcion contenedor de puros caracteres (Char)
    std::cout<<cin.add()<<std::endl;//imprime el entero
    std::cout<<cchar.uppercase()<<std::endl;//imprime la variable
    return 0;
}
