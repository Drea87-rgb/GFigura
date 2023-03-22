/*Questa classe crea un quadrato e implementa le funzioni
    da Figura
*/

#include "Quadrato.h"

Quadrato::Quadrato(){}

Quadrato::Quadrato(int l,int a):Figura(l,a) {}

void Quadrato::getImmagine(){//Questa funzione crea e stampa un quadrato
    std::string stt = " ";
    std::string bss = "";
    std::string bss2 = "";
    std::string space = "";

    for (int i = 0;i < Figura::getLarghezza()*2;i++){
        stt += "_";
    }

    for (int z = 0;z < Figura::getLarghezza()*2;z++){
        bss2 += "_";
    }

    for (int s =0;s < Figura::getLarghezza()*2-1;s++){
        space += " ";
    }

    for (int x = 0;x < Figura::getLarghezza();x++){
        if (x != Figura::getLarghezza()-1){
            bss += "| " + space + "|\n";
        } else bss += "|" + bss2 + "|\n";
    }

    std::cout << stt + "\n" + bss;
}

std::string Quadrato::getFigura(){//questa funzione ritorna il nome della figura scelta
    return "Hai scelto un __QUADRATO__\n";
}
