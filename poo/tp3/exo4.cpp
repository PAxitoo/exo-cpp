#include <iostream>

using namespace std;

class Intreliee_t {
    int valeur;
    Intreliee_t * suivant;
public:
    Intreliee_t(int v, Intreliee_t * s) : valeur(v), suivant(s) {}
    Intreliee_t(int v) : valeur(v), suivant(0) {}
    Intreliee_t() : valeur(0), suivant(0) {}
    void affiche() const {
        cout << valeur;
        if (suivant != 0) {
            cout << " -> ";
            suivant->affiche();
        }
    }
    void ajoute(int v) {
        if (suivant == 0) {
            suivant = new Intreliee_t(v);
        } else {
            suivant->ajoute(v);
        }
    }
    void ajoute(Intreliee_t * i) {
        if (suivant == 0) {
            suivant = i;
        } else {
            suivant->ajoute(i);
        }
    }
    void supprime() {
        if (suivant != 0) {
            suivant->supprime();
        }
        delete this;
    }
};

int main() {
    Intreliee_t * i = new Intreliee_t(1);
    i->ajoute(2);
    i->ajoute(3);
    i->ajoute(4);
    i->ajoute(5);
    i->ajoute(6);
    i->ajoute(7);
    i->ajoute(8);
    i->ajoute(9);
    i->ajoute(10);
    i->affiche();
    cout << endl;
    i->supprime();
    return 0;
}