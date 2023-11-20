#include <iostream>
using namespace std;
 int main() {
/* Vous devez corriger ce programme et arriver à le compiler puis l’exécuter.
cout << ’Le programme marche !’ << end;
int valeur = 10 */
int valeur = 10;
cout << "valeur = " << valeur << endl;
// Attention : la division de deux entiers est une division euclidienne, // c’està-dire une division ***ENTIERE*** !
int quotient = 10 / 3;
cout << "quotient = " << quotient << endl;
int reste = 10 % 3;
cout << "reste=" << reste << endl;
// Si vous voulez faire une division réelle, il faut convertir un des
// arguments en réel :
cout << "quotient reel =" << valeur / 3.0 <<endl; // Cette fois-ci 3.0 est réel
cout << "Fin du programme"<< endl;
return 0;
} 
