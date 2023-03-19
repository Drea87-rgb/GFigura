#ifndef TRIANGOLO_H_INCLUDED
#define TRIANGOLO_H_INCLUDED
#include "Figura.h"
#include <iostream>

class Triangolo:public Figura
{
    private:

    public:
        Triangolo(int l,int a);
        Triangolo();
        void getImmagine();
        std::string getFigura();
};

#endif // TRIANGOLO_H_INCLUDED
