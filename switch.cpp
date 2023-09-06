#include <iostream>

using namespace std;

int main(){
    int nombre(0);
    cout << "Entrez un nombre" << endl;
    cin >> nombre;
    switch (nombre){
        case 0:
            cout << "Le nombre est nul" << endl;
            break;
        case 1:
            cout << "Le nombre est positif" << endl;
            break;
        case -1:
            cout << "Le nombre est négatif" << endl;
            break;
        default:
            cout << "Le nombre n'est pas 0, 1 ou -1" << endl;
            break;
    }
    return 0;
}