#ifndef FIGURA_H_INCLUDED
#define FIGURA_H_INCLUDED
#include <iostream>

class Figura
{
    private :
        int larghezza;
        int altezza;
    public:
        Figura(int l,int a);
        Figura();
        void setLarghezza(int larghezza);
        int getLarghezza();
        void setAltezza(int altezza);
        int getAltezza();
        void getImmagine();
        std::string getFigura();
};

#endif // FIGURA_H_INCLUDED
