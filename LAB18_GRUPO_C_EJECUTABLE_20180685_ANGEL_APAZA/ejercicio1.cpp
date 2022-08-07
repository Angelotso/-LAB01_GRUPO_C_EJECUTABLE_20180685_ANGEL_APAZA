#include <iostream>

using namespace std;

template <int N>
struct sumcif
{
    enum { value = (N % 10) + sumcif<N/10>::value };
};

template<>
struct sumcif<0>
{
    enum { value = 0} ;
};

int main() {

    int sum = sumcif<314874>::value;
    cout <<"suma de cifras es "<< sum << endl;
    system("pause");
    return 0;
}