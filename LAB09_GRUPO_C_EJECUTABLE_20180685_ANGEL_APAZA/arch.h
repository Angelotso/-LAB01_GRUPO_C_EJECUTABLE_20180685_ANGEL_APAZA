#ifndef _ARCHI_H_
#define _ARCHI_H_

template <class Doc>
class Formato
{
    private:
        Doc letra;
    public:
        Formato(Doc);
        Doc Imprimirle();
};

template<class Docu>
class Complet
{
    private:
        Docu apellido;
    public:
        Complet(Docu);
        Docu Imprimirap();
};

#endif

