#include <iostream>
#include <memory>
using namespace std;
//EJERCICIO 3:Implementar el código para las clases C1 y C2, cada una de las cuales contiene el
//objeto compartido d anterior, por ejemplo:
class C1
{
    protected:
        double d;
    public:
        C1(double value) : d(value) {}
        ~C1() { std::cout << "Destructor C1"<<std::endl; };
        void print() {
            std::cout << d << std::endl;
        }
};

class C2
{
    protected:
        double x;
    public:
        C2(double value) : x(value) {}
        ~C2() { std::cout << "Destructor C2"<<std::endl; }
        void print() {
            std::cout << x << std::endl;
        }
};

/*
int main() {
    
    C1 *n = new C1(3.9);
    C2 *n2 = new C2(9.4);

    (*n).print();
    (*n2).print();

    delete n;
    delete n2;

    system("pause");
    return 0;
}
*/
//EEJERCICIO 4 :Transfiera el código anterior reemplazando los punteros sin formato por
//std::shared_n<Point> p;

/*
int main() {
    std::shared_ptr<C1>n = std::make_shared<C1>(4.8);
    std::shared_ptr<C1>n2(n);
    n->print();
    n2->print();
    n2.reset();
}
*/

//EJERCICIO 5: Al anterior código implemente un puntero débil a un puntero el cual no puede
//estar vacío.
int main() {
    std::shared_ptr<C1>n = std::make_shared<C1>(7.2);
    std::shared_ptr<C1>n2(n);
    
    std::weak_ptr<C1> n3 = n2;

    n->print();
    n2->print();
    n2.reset();

    return 0;
}