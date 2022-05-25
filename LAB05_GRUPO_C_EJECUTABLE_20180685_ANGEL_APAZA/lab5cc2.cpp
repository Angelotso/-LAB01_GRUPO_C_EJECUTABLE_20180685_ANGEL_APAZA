#include <iostream>
#include <time.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

/*
//EJERCICIO 1
void intercambio(int *n1, int*n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main()
{
    int num1,num2;
    cout<<"primer varlor: ";
    cin>>num1;
    cout<<"segundo valor: ";
    cin>>num2;

    intercambio(&num1,&num2);

    cout<<"nuevo primer valor: "<<num1<<endl;
    cout<<"nuevo segundo valor: "<<num2;
}
*/


//EJERCICIO 2
int main()
{
    const int tam=10;
    float *A, *B, *C;
    A=new float [tam];
    B=new float [tam];
    C=new float [tam];
    srand(time(NULL));
    for(int i=0; i<tam; i++){
        A[i]= (float)(i + rand() % 500)/100;
    }
    for(int j=0; j<tam; j++){
        B[j]= (float)(j + rand() % 500)/100;
    }
    cout<<"\nARREGLO A:\n";
    for(int i=0; i<tam; i++){
        cout<<" "<<A[i];
    }
    cout<<"\nARREGLO B:\n";
    for(int j=0; j<tam; j++){
        cout<<" "<<B[j];
    }

    for (int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            for(int k=0;k<tam;k++){
                C[k]=A[i]* B[j];
            }
        }
    }
    cout<<"\nARREGLO C:\n";
    for(int k=0; k<tam; k++){
        cout<<" "<<C[k];
    }
    cout<<"\nPRODUCTO PUNTO:\n";
    float cont=0;
    for(int k=0;k<tam;k++){
        cont = cont + C[k];
    }
    cout<<cont;
    delete[]A;
    delete[]B;
    delete[]C;
    return 0;
}

//EJERCICIO 3

