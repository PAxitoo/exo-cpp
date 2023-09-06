#include <iostream>
using namespace std;

int main()
{
    int ageUtilisateur(16);
    int *ptr(0);  

    ptr = &ageUtilisateur;

    cout << "L'adresse de 'ageUtilisateur' est : " << &ageUtilisateur << endl;
    cout << "La valeur de pointeur est : " << ptr << endl;    

    return 0;
}