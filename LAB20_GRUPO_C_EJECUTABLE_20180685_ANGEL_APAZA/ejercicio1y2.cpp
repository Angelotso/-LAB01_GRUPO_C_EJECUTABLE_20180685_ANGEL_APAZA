#include <iostream>
#include <memory>

using namespace std;

class Point
{
    private:
        double x{}, y{};
    public:
        Point(double x, double y) : x(x), y(y) {};
        ~Point() { std::cout << "Point destructor" << std::endl;}
        void print(){
            std::cout << "(" << x << ", " << y << ")\n";
        }
        void X(double a) { std::cout <<"pt: "<<a << std::endl;};
        void Y(double b) { std::cout <<"pt: "<<b << std::endl;};
};

//EJERCICIO 1 :Implemente el siguiente código que usa punteros sin procesar y explique lo que
//hace:
/*
int main()
{
    double* d = new double(1.0);//crea un puntero de tipo double
    Point* pt = new Point(1.0, 2.0);//crea un puntero de la calse Point
    *d = 2.0;//puntero d tiene un valor de 2.0
    (*pt).X(3.0);//se llama a la funcion X(double) y asignandole un valor a pt
    (*pt).Y(3.0);//se llama a la funcion Y(double) y asignandole un valor a pt 
    pt->X(3.0);//se vuelve a llamar a la funcion y pt toma el valor de 3.0
    pt->Y(3.0);//se vuelve a llamar a la funcion y pt toma el valor de 3.0
    delete d;//libera memoria d
    delete pt;//libera memoria pt

    system("pause");
    return 0; 
}
*/

//EJERCICIO 2: Transfiera el código anterior reemplazando los punteros sin formato por
//std::unique_ptr.
int main()
{
    std::unique_ptr<double> d = std::make_unique<double>(1.0);
    std::unique_ptr<Point> pt = std::make_unique<Point>(1.0,2.0);
    //std::unique_ptr<double> d = 2.0;
    *d = 2.0;
    (*pt).X(3.0);
    (*pt).Y(3.0);
    pt->X(3.0);
    pt->Y(3.0);
    
    system("pause");
    return 0; 
}