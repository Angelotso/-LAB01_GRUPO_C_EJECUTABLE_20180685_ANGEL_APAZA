#ifndef _BUSQUE_H_
#define _BUSQUE_H_

class Matriz
{
    private:
        int filas;
        int columnas;
    public:
        Matriz(int,int);
        ~Matriz();
        void Llenarmatriz();
        void Bucarelemento();
};
#endif