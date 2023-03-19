#ifndef QUADRATO_H_INCLUDED
#define QUADRATO_H_INCLUDED
#include "Figura.h"
#include <iostream>

class Quadrato:public Figura
{
    private :

    public:
        Quadrato(int l,int a);
        Quadrato();
        void getImmagine();
        std::string getFigura();
};

#endif // QUADRATO_H_INCLUDED
