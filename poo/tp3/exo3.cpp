#include <iostream>

using namespace std;

class alea_t {
private:
    int graine;
    int ancienneValeur;
public:
    alea_t(int graine) : graine(graine), ancienneValeur(graine) {}

    int rand() { 
        ancienneValeur = (ancienneValeur * 1103515245 + 12345) % 2147483647; 
        return ancienneValeur; 
    }

    void srand(int nouvelleGraine) { 
        graine = nouvelleGraine; 
        ancienneValeur = nouvelleGraine; 
    } 
};

int main(){
    alea_t alea(1);
    cout << "Nombre aleatoire : " << alea.rand() << endl;
    alea.srand(2);
    cout << "Nombre aleatoire : " << alea.rand() << endl;
    return 0;
}