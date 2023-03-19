/* Questa classe crea una figura
    che viene poi usata da altre classi per implementare
    le funzioni
*/

#include "Figura.h"

Figura::Figura(){}

Figura::Figura(int l, int a)
{
    larghezza = l;
    altezza = a;
}

void Figura::setLarghezza(int l){
    larghezza = l;
};

int Figura::getLarghezza(){
    return larghezza;
};

void Figura::setAltezza(int a){
    altezza = a;
};

int Figura::getAltezza(){
    return altezza;
};

void Figura::getImmagine(){};

std::string Figura::getFigura(){
    return "Figura_:\t\n\tLarghezza: " + std::to_string(larghezza) + "\t\n\tAltezza: " + std::to_string(altezza) + "\n";;
};
