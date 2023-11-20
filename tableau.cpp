#include <iostream>
using namespace std;


int main() {
    int t[10], i;
    int moyenne = 0;


    for(i = 0; i < 10; i++) {
        cout << "Quelle est la note " << i + 1<< " : ";
        cin >> t[i];
        moyenne += t[i];
    }
   
    cout << "Moyenne : " << moyenne / 10 << endl;


    int indice;
    cout << "Entrez l'indice de la note que vous souhaitez afficher (entre 0 et 9) : ";
    cin >> indice;


    cout << "Note n' " << indice  << " du tableau : " << t[indice] << endl;


    return 0;
}


