/*Questa classe crea un rettangolo e implementa le funzioni
    da Figura
*/

#include "Rettangolo.h"

Rettangolo::Rettangolo(){}

Rettangolo::Rettangolo(int l,int a):Figura(l,a){}

void Rettangolo::getImmagine(){//Questa funzione crea e stampa un rettangolo
    std::string stt = " ";
    std::string bss = "";
    std::string bss2 = "";
    std::string space = "";

    for (int i = 0;i < Figura::getLarghezza()*2;i++){
        stt += "_";
    }

    for (int i = 0;i < Figura::getLarghezza()*2;i++){
        bss2 += "_";
    }

    for (int s =0;s < Figura::getLarghezza()*2-1;s++){
        space += " ";
    }

    for (int x = 0;x < Figura::getAltezza();x++){
        if (x != Figura::getAltezza()-1){
            bss += "| " + space + "|\n";
        } else bss += "|" + bss2 + "|\n";
    }

    std::cout << stt + "\n" + bss;
}

std::string Rettangolo::getFigura(){//questa funzione ritorna il nome della figura scelta
    return "Hai scelto un __RETTANGOLO__\n";
}
