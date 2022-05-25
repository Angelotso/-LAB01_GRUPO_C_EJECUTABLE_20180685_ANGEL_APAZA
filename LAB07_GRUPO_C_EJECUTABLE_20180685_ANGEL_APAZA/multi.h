#ifndef _MULTIMEDIA_H_
#define _MULTIMEDIA_H_
#include <iostream>
#include <string.h>
using namespace std;

class Multimedia
{
    private:
        string pelicula;
        string musica;
    public:
        Multimedia(string,string);
        ~Multimedia();
        void Mostrarmulti();
        
};
#endif 