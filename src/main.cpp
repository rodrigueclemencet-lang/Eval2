#include <iostream> 
using namespace std;
unsigned char choixUtilisateur;
bool choixValide = false;


int main() {  
  //variable permettant de compter le nombre de places disponibles  
  int nbrePlaces = 10;  
  //variable permettant de récupérer le choix de l’utilisateur  
  cout << "************ Evaluation 2 ************" << endl << endl;
  cout << "1 - Entrée dans le parking" << endl << endl;
  cout << "2 - Nombre de places disponibles" << endl << endl;
  cout << "3 - Sortie de parking" << endl << endl;
  cout << "4 - Quitter" << endl << endl;

    std::cout << "****************************************\n";

    std::cout << "Faire votre choix\n";
    std::cin >> choixUtilisateur;
    std::cout << "vous avez choisi " << choixUtilisateur << std::endl;

    if (choixUtilisateur == '1') {
      std::cout << "Entrée dans le parking\n";
      choixValide = true;
    } else if (choixUtilisateur == '2') {
      std::cout << "Nombre de places dans le parking\n";
      choixValide = true;
    } else if (choixUtilisateur == '3') {
      std::cout << "Sortie de Parking\n";
      choixValide = true;
    } else if (choixUtilisateur == '4') {
      std::cout << "Quitter\n";
      choixValide = true;
    } else {
      std::cout << "Choix invalide\n\n";
    }
  




  return 0;
}