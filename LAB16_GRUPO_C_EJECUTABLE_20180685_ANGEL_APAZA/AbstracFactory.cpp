#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class WinFactory
{
    public:
        virtual ~WinFactory() {};
        virtual string DrawW() const = 0;
};

class WinButton : public WinFactory
{
    public:
        string DrawW() const override {
            return "Dibujando boton Windows.";
        }
};

class WinCheckBox : public WinFactory
{
    public:
        string DrawW() const override {
            return "Dibujando checkbox Windows.";
        }
};

class MacFactory
{
    public:
        ~MacFactory() {};
        virtual string Draw() const = 0;
        virtual string Draw2(const WinFactory& colaborador) const = 0;
};

class MacButton : public MacFactory
{
    public:
        string Draw() const override {
            return "Dibujando boton Mac.";
        }
        string Draw2(const WinFactory& colaborador) const override {
            const string result = colaborador.DrawW();
            return "Dibujando Boton Mac con ayuda de " + result;
        }
};

class MacCheckBox : public MacFactory
{
    public:
        string Draw() const override {
            return "Dibujando checkbox Mac.";
        }
        string Draw2(const WinFactory& colaborador) const override {
            const string result = colaborador.DrawW();
            return "Dibujando checkbox Mac con ayuda de " + result;
        }
};

class GUIFactory
{
    public:
        virtual WinFactory* CrearControlW() const = 0;
        virtual MacFactory* CrearControlM() const = 0;
};

class Button : public GUIFactory
{
    public:
        WinFactory* CrearControlW() const override {
            return new WinButton();
        }
        MacFactory* CrearControlM() const override {
            return new MacButton();
        }
};

class CheckBox : public GUIFactory
{
    public:
        WinFactory* CrearControlW() const override {
            return new WinCheckBox();
        }
        MacFactory* CrearControlM() const override {
            return new MacCheckBox();
        }
};

void Aplication(const GUIFactory& sistema, int opc) {
    const WinFactory* producto_windows;
    const MacFactory* producto_mac;
    
    switch (opc)
    {
    case 1:
        producto_windows = sistema.CrearControlW();
        cout << producto_windows->DrawW() << "\n";
        break;
    case 2:
        producto_mac = sistema.CrearControlM();
        cout << producto_mac->Draw() << "\n";
        break;
    default:
        break;
    }
}

int main() {

    cout << "Cliente: Windows\n";
    Button* f1 = new Button();
    Aplication(*f1, 1); // 1 - Windows
    delete f1;

    cout << endl;
    
    cout << "Cliente: Mac\n";
    Button* f2 = new Button();
    Aplication(*f2, 2); // 2 - Mac
    delete f2;

    return 0;
}