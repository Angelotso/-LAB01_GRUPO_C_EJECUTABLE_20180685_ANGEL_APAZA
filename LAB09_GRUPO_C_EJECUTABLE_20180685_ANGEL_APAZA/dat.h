#ifndef _DAT_H_
#define _DAT_H_

template <class N>
class Operacion
{
    private:
        N n1;
        N n2;
    public:
        Operacion(N,N);
        N Suma();
        N Resta();
        N Multi();
        N Divi();
};
#endif