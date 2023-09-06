#include <iostream>

using namespace std;

class Interv{
    private: 
        double bs; // borne supérieur
        double bi; // borne inferieur
    public:
        Interv(double a, double b);
        Interv();
        Interv(double a);
        bool appartient(double e)const;
        Interv intersec(Interv a)const;
        Interv unifier(Interv a);
        int estVide();
};
int maxd(double a, double b);
int mind(double a, double b);