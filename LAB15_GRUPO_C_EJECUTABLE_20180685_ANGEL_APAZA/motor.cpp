#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;
/**
 * Tiene sentido usar el patrón Builder solo cuando sus productos son bastante
 * complejo y requiere una configuración extensa.
 *
 * A diferencia de otros patrones de creación, diferentes constructores de concreto pueden producir
 * productos no relacionados. En otras palabras, los resultados de varios constructores pueden no
 * siempre siga la misma interfaz.
 */
class Producto1 {
    public:
        std::vector<std::string> componentes; 
 
    void ListaComp()const { 
        std::cout << "Componentes : ";
        for (size_t i = 0; i < componentes.size(); i++){
            if (componentes[i] == componentes.back()) { 
                std::cout << componentes[i];
            } 
            else{ 
                 std::cout << componentes[i] << ", ";
            } 
        }
        std::cout << "\n\n";
    } 
};
/**
 * La interfaz de Builder especifica métodos para crear las diferentes partes de
 * los objetos Producto.*/
class IBuilderCar {
    public:
    virtual ~IBuilderCar() {}
    virtual void ProcCarIni() const =0;
    virtual void ProducCar() const = 0;
    virtual void ProducLlanta() const = 0;
    virtual void ProductVentana() const = 0;
    virtual void Carcolor() const = 0;
    virtual void CarMotor() const =0;
    virtual void CarPuertas() const =0;
};
/**
 * Las clases de Concrete Builder siguen la interfaz de Builder y proporcionan
 * implementaciones específicas de los pasos de construcción. Su programa puede tener varios
 * variaciones de Builders, implementadas de manera diferente.
*/

class BuilderEspecifico : public IBuilderCar {
    private:
        Producto1* product;
       /**
     * Una nueva instancia del constructor debe contener un objeto de producto en blanco, que es
     * utilizado en el montaje posterior.
     */
    public:
        BuilderEspecifico() { this->Reset();}
        ~BuilderEspecifico() { delete product;}
        void Reset() { this->product = new Producto1();}
        /**
        * Todos los pasos de producción funcionan con la misma instancia de producto.
        */
        void ProcCarIni()const override {this->product->componentes.push_back("Lamborgini");}
        void ProducCar()const override { this->product->componentes.push_back("Aventador LP 780-4 ULTIMATE");}
        void ProducLlanta()const override { this->product->componentes.push_back("Llanta radial");}
        void ProductVentana()const override {this->product->componentes.push_back("Vidrio Polarizada");}
        void Carcolor()const override {this->product->componentes.push_back("rojo deportivo");}
        void CarMotor()const override {this->product->componentes.push_back("motor V8");}
        void CarPuertas()const override {this->product->componentes.push_back("Puerta ala mariposa");}
        /**
     * Se supone que Concrete Builders debe proporcionar sus propios métodos para
     * Recuperación de resultados. Eso es porque varios tipos de constructores pueden crear
     * productos completamente diferentes que no siguen la misma interfaz.
     * Por lo tanto, dichos métodos no se pueden declarar en la interfaz base de Builder
     * (al menos en un lenguaje de programación tipado estáticamente). Tenga en cuenta que PHP es un
     * Lenguaje escrito dinámicamente y este método PUEDE estar en la interfaz base.
     * Sin embargo, no lo declararemos allí en aras de la claridad.
     * Por lo general, después de devolver el resultado final al cliente, una instancia del constructor
     * se espera que esté listo para comenzar a producir otro producto. Es por eso
     * es una práctica habitual llamar al método de reinicio al final de la
     * Cuerpo del método `getProduct`. Sin embargo, este comportamiento no es obligatorio, y
     * puede hacer que sus constructores esperen una llamada de reinicio explícita del
     * código de cliente antes de desechar el resultado anterior.
     */

    /**
     * Tenga cuidado aquí con la propiedad de la memoria. Una vez que llame
     * GetProduct, el usuario de esta función es responsable de liberar este
     * memoria. Aquí podría haber una mejor opción para usar punteros inteligentes para evitar
     * pérdidas de memoria
     */
        Producto1* GetProducto() { 
            Producto1* resultado = this->product;
            this->Reset();
            return resultado;
        }
};
/**
 * El Director solo es responsable de ejecutar los pasos de construcción en un
 * secuencia particular. Es útil cuando se fabrican productos de acuerdo con un
 * orden o configuración específica. Estrictamente hablando, la clase Director es
 * opcional, ya que el cliente puede controlar los constructores directamente.
 */

class Director {
    private:
        IBuilderCar* builder;
        /**
     * El Director trabaja con cualquier instancia de constructor que pase el código del cliente
     * a eso. De esta forma, el código de cliente puede alterar el tipo final de la nueva
     * producto ensamblado.
     */
    public:
        void set_builder(IBuilderCar* builder) { this->builder = builder; }
        /**
     * El Director puede construir varias variaciones de productos utilizando el mismo
     * pasos de construcción.
     */
        void BuildProductoMin() { this->builder->ProcCarIni(); }
        void BuildProductoCompleto() {
            this->builder->ProducCar();
            this->builder->ProducLlanta();
            this->builder->ProductVentana();
            this->builder->Carcolor();
            this->builder->CarMotor();
            this->builder->CarPuertas();
        }
};
/**
 * El código del cliente crea un objeto constructor, se lo pasa al director y luego
 * inicia el proceso de construcción. El resultado final se recupera de la
 * objeto constructor.
 */
/**
 * Utilicé punteros en bruto para simplificar, sin embargo, es posible que prefiera usar smart
 * punteros aquí
 */

void ClienteCode(Director& director)
{
    BuilderEspecifico* builder = new BuilderEspecifico();
    director.set_builder(builder);
    cout << "Producto Basico:\n";
    director.BuildProductoMin();

    
    Producto1* p = builder->GetProducto();
    p->ListaComp();
    delete p;
    
    cout << "Producto Completo:\n";
    director.BuildProductoCompleto();

    p = builder->GetProducto();
    p->ListaComp();
    delete p;
    builder->ProcCarIni();
    builder->ProductVentana();
 
    delete p;
    delete builder;
}

int main() {
    Director* director = new Director();
    ClienteCode(*director);
    delete director;

    return 0;
}