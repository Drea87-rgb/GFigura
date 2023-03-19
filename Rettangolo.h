#ifndef RETTANGOLO_H_INCLUDED
#define RETTANGOLO_H_INCLUDED
#include "Figura.h"
#include <iostream>

class Rettangolo:public Figura
{
    private:

    public:
        Rettangolo(int l,int a);
        Rettangolo();
        void getImmagine();
        std::string getFigura();
};

#endif // RETTANGOLO_H_INCLUDED
