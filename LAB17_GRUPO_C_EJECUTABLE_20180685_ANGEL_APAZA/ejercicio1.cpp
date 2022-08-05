#include <iostream>

using namespace std;

template<typename T>
T suma(T x, T y)
{
    return x + y ;
}
template<typename T>
T resta(T x, T y)
{
    return x - y ;
}
template<typename T>
T multi(T x, T y)
{
    return x * y ;
}
template<typename T>
T division(T x, T y)
{
    if(y==0){
        return -1;
    }
    return x / y ;
}
int main()
{
    cout<< suma<int>(3,5)<<"\n";
    cout<< resta<int>(24,6)<<"\n";
    cout<< multi<float>(3.2,4.6)<<"\n";
    cout<< division<double>(44.6,12.3)<<"\n";
    return 0;
}
