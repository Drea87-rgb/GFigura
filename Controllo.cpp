/* Questa classe fa un controllo se le lunghezze/altezze
    sono state inserite corrette
*/

#include "Controllo.h"
#include "Menu.h"

void Controllo::controllo(int l,int a){//questa funzione non accetta interi maggiori a 100
    const int maxMisura = 100;
    const int minMisura = 4;
    int larghezza,altezza;
    larghezza = l;
    altezza = a;
    if (l > maxMisura || a > maxMisura){
        std::cout << "\nAccetto numeri inferiori a 100..." << std::endl;
        Menu::menu();
    } if (l < minMisura || a < minMisura) {
        std::cout << "\nAccetto numeri superiori a 3..." << std::endl;
        Menu::menu();
    }
}


