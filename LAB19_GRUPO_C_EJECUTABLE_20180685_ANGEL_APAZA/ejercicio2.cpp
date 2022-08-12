#include <iostream>
#include <string.h>
using namespace std;

class Encontrar
{
    public:
        void operator()(char ini,char fin, char val){
            string frase = "ejercicio dos del laboratorio diescienueve";
            cout<<"Frase: "<<frase;
            cout<<endl;
            cout<<"letra a bucar: "<<val<<endl;
            size_t letra = frase.find(val);
            if (letra != string::npos)
            cout << "Primera ocurrencia en " << letra << endl;
            letra = frase.find(val, letra+1);
            if (letra != string::npos)
            cout << "siguiente ocurrencia en " << letra << endl;                    
        }
};
int main()
{
    Encontrar frase;
    frase('e','e','c');
    system("pause");
    return 0;
}