#include <iostream>
#include <string>
#include "calcul_carre.hpp"
using namespace std;

int main() {
    double nombre, carreNombre;
    cout << "Entrez un nombre : ";
    cin >> nombre;

    carreNombre = carre(nombre); //On utilise la fonction

    cout << "Le carre de " << nombre << " est " << carreNombre << endl;
    return 0;
}