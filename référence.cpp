#include <iostream>

using namespace std;

int main(){
    int ageUtilisateur(18);
    int& maReference(ageUtilisateur);
    cout << "Vous avez " << ageUtilisateur  << " ans." << endl;
    cout << "Vous avez " << maReference  << " ans." << endl;

    
    return 0;
}