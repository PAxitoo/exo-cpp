#include <iostream>

using namespace std;

int main(){
    int nombre(0);
    cout << "Entrez un nombre" << endl;
    cin >> nombre;
    if (nombre > 0){
        cout << "Le nombre est positif" << endl;
    } else if (nombre < 0){
        cout << "Le nombre est négatif" << endl;
    } else {
        cout << "Le nombre est nul" << endl;
    }
    return 0;
}