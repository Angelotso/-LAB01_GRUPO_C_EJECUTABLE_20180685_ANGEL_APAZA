#ifndef _MAYOR_H_
#define _MAYOR_H_

template <class Tdate>
class Numeros
{
    private:
        Tdate n1;
        Tdate n2;
        Tdate n3;
    public:
        Numeros(Tdate,Tdate,Tdate);
        Tdate Mayor();
        Tdate Menor();
};
#endif
