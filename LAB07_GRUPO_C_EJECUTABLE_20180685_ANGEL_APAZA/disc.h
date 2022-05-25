#ifndef _DISCO_H_
#define _DISCO_H_
#include "multi.h"

class Disco : public Multimedia
{
    private:
        string disco;
    public:
        Disco(string,string,string);
        ~Disco();
        void tipodisco();
};
#endif