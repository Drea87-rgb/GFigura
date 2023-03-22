/*Questa classe crea un triangolo e implementa le funzioni
    da Figura
*/

#include "Triangolo.h"

Triangolo::Triangolo(){}

Triangolo::Triangolo(int l,int a):Figura(l,a){}

void Triangolo::getImmagine(){//Questa funzione crea e stampa un triangolo
    std::string base = "/";
    std::string latoS = "";
    std::string space = "";
    std::string spaceV = "";
    std::string vuota = "";
    char sl = 's';

    for (int i = 0;i < Figura::getLarghezza()-2;i++){
        base += "_";
    }
    for (int s = 0; s < Figura::getAltezza()/2; s++){
        space += " ";
    }

    for (int b = 0;b < Figura::getAltezza()/2;b++){
        if (b == 1 ){
            latoS += space.erase(space.size()-1) + "/" + spaceV + "\\" +"\n";
            vuota = latoS;
        }
        if (b > 1) {
            latoS += space.erase(space.size()-1) + "/" + spaceV.append("  ") + "\\" +"\n";
            vuota = latoS;
            spaceV.append("");
        }
    }
    std::cout << vuota + base + "\\" << std::endl;
}

std::string Triangolo::getFigura(){//questa funzione ritorna il nome della figura scelta
    return "Hai scelto un __TRIANGOLO__\n";
}
