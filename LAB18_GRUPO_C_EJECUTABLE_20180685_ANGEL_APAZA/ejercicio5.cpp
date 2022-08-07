#include<iostream>

using namespace std;

template<int n> 
struct Binario
{
  enum { value = (n % 2) + 10 * Binario<n/2>::value } ;
};

template <>
struct Binario <0>
{
  enum { value = 0 } ;
};

int main ()
{
    int b1 = Binario<9>::value;
    cout <<"binario (9) -> "<< b1 << endl;
    int b2 = Binario<11>::value;
    cout <<"binario (11) -> "<< b2 << endl;
    int b3 = Binario<15>::value;
    cout <<"binario (15) -> "<< b3 << endl;
    system("pause");
    return 0;
}