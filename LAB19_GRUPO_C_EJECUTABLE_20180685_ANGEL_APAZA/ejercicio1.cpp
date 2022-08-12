#include <iostream>

using namespace std;

class Ecuacion 
{
    private:
        int n;
        float x,y,sumx,sum_sqx,sumy,sumxy,a,b;
    public:
        void operator()(){
            cout<<"numero datos: ";cin>>n;
            sumx = sum_sqx = sumy=sumxy=0;
            for(int i=0;i<n;i++){
                cout<<"x: ";cin>>x;
                cout<<"y: ";cin>>y;
                sumx = sumx +x;
                sum_sqx = sum_sqx + (x*x);
                sumy= sumy + y;
                sumxy = sumxy + (x*y);
            }
            b = (sumxy-(sumx*sumy)/n)/(sum_sqx-(sumx*sumx)/n);
            a = (sumy/n)-(b*sumx/n);
            cout<<"Ecuacion-> y = "<<a<<" + "<<b<<"x";
            cout<<endl;
        }
};
int main()
{
    Ecuacion obj;
    obj();
    system("pause");
    return 0;
}