#include<iostream>

using namespace std;

template <typename T>
void hexadecimal(T n)
{
    if(n<16){
        switch (n)
        {
        case 10:
            cout<<"A";
            break;
        case 11:
            cout<<"B";
            break;
        case 12:
            cout<<"C";
            break;
        case 13:
            cout<<"D";
            break;
        case 14:
            cout<<"E";
            break;
        case 15:
            cout<<"F";
            break;
        default:
            cout << n;
            break;
        }
    }
    else{
        hexadecimal(n/16);
        hexadecimal(n%16);
    }
}

int main()
{
    int x;
    cout<<"numero: ";cin>>x;
    //cout<<"hexadecimal: ";
    //hexadecimal<int>(x);
    for (int i=1;i<=x;i++){
        cout<< i << " -> ";
        hexadecimal<int>(i);
        cout<<endl;
    }
    cout<<"\n";
    system("pause");
    return 0;
}