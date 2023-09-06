#include <iostream>
#include <cmath>       

using namespace std;

int main(){
    cout << "Quelle raçine voulez-vous ?" << endl;
    int nombre(0);
    double resultat;
    cin >> nombre;

    resultat = sqrt(nombre);

    cout << "La racine de " << nombre << " est " << resultat << endl;

    return 0;
}

