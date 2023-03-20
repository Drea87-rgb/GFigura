/*Questa classe stampa un menu
    e richiama i vari oggetti(figura) gestiti da cicli
*/

#include "Menu.h"
#include "Controllo.h"
#include "Quadrato.h"
#include "Rettangolo.h"
#include "Triangolo.h"

void Menu::menu(){
    int scelta = 0;
    do{
        std::cout << "MENU:" << std::endl;
        std::cout << "1)_Quadrato" << std::endl;
        std::cout << "2)_Rettangolo" << std::endl;
        std::cout << "3)_Triangolo" << std::endl;
        std::cout << "0)_Uscita" << std::endl;
        std::cout << "\ninput> ";
        std::cin >> scelta;

        switch(scelta){
            case 1:{
                std::string largQuad = "";
                double resto = 0;
                for (int a = 0;a < 100;a++){
                    std::cout << std::endl;
                }
                std::cout << "Misura lato: ";
                std::cin >> largQuad;
                try {
                    Controllo::controllo(std::stoi(largQuad),std::stoi(largQuad));
                    } catch (std::invalid_argument exc) {
                        std::cout << "\nInserisci solo interi...\n";
                        Menu::menu();
                    }
                if (std::stoi(largQuad) % 2 > 0){
                    Quadrato* quadrato = new Quadrato(std::stoi(largQuad)-1,std::stoi(largQuad));
                    std::cout << quadrato->getFigura() + "\n";
                    quadrato->getImmagine();
                    delete quadrato;
                } else {
                    Quadrato* quadrato = new Quadrato(std::stoi(largQuad),std::stoi(largQuad));
                    std::cout << quadrato->getFigura() + "\n";
                    quadrato->getImmagine();
                    delete quadrato;
                }
                break;
            }
            case 2:{
                std::string largRett = "";
                std::string altRett = "";
                for (int a = 0;a < 100;a++){
                    std::cout << std::endl;
                }
                std::cout << "Misura larghezza: ";
                std::cin >> largRett;
                std::cout << "Misura altezza: ";
                std::cin >> altRett;
                try {
                    Controllo::controllo(std::stoi(largRett),std::stoi(altRett));
                    } catch (std::invalid_argument exc) {
                        std::cout << "\nInserisci solo interi...\n";
                        Menu::menu();
                    }
                Controllo::controllo(std::stoi(largRett),std::stoi(altRett));
                Rettangolo* rettangolo = new Rettangolo(std::stoi(largRett),std::stoi(altRett));
                std::cout << rettangolo->getFigura() + "\n";
                rettangolo->getImmagine();
                delete rettangolo;
                break;
            }
            case 3:{
                std::string largTri = "";
                for (int a = 0;a < 100;a++){
                    std::cout << std::endl;
                }
                std::cout << "Misura triangolo(equilatero): ";
                std::cin >> largTri;
                try {
                    Controllo::controllo(std::stoi(largTri),std::stoi(largTri));
                    } catch (std::invalid_argument exc) {
                        std::cout << "\nInserisci solo interi...\n";
                        Menu::menu();
                    }
                Controllo::controllo(std::stoi(largTri),std::stoi(largTri));
                if (std::stoi(largTri) % 2 > 0){
                    Triangolo* triangolo = new Triangolo(std::stoi(largTri)-1,std::stoi(largTri));
                    std::cout << triangolo->getFigura() + "\n";
                    triangolo->getImmagine();
                    delete triangolo;
                } else {
                    Triangolo* triangolo = new Triangolo(std::stoi(largTri),std::stoi(largTri));
                    std::cout << triangolo->getFigura() + "\n";
                    triangolo->getImmagine();
                    delete triangolo;
                }
                break;
            }
        }
    } while (!scelta == 0);
}














