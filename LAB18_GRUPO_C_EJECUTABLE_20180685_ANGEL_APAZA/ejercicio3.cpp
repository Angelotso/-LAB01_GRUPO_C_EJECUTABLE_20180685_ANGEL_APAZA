#include<iostream>

using namespace std;

template <int x, int y>
struct Potencia
{
    enum { value = x * Potencia <x , y - 1>::value };
};

template<int x>
struct Potencia <x,0>
{
    enum { value = 1 };
};

int main() {

    int p = Potencia<2,10>::value;
    cout <<"resultado ->" << p << endl;
    system("pause");
    return 0;
}