#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Quel est votre nom ?" << endl;

    string nomUtilisateur("Sans nom");

    getline(cin, nomUtilisateur);

    cout << "Combien vaut pi ?" << endl;
    double piUtilisateur(-1.);

    cin >> piUtilisateur;

    cout << "Vous vous appelez " << nomUtilisateur << " et vous pensez que pi vaut " << piUtilisateur << endl;

    return 0;
}