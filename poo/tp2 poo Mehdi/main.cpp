#include <iostream>
#include <string>
#include "personne.hpp"

using namespace std;

int main(){
    personne_t p("Nicolas", "Nicolas", 25);
    cout << p.getProfession() << endl;
    cout << p.affiche() << endl;
    return 0;

    return 0;
}