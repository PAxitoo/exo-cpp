#include <iostream>
#include <string>
using namespace std;

int main()
{
   string prenom("Albert"); 
   string nom("Einstein");
   
   string total;    //Une chaîne vide
   total += prenom; //On ajoute le prénom à la chaîne vide
   total += " ";    //Puis un espace
   total += nom;    //Et finalement le nom de famille

   cout << "Vous vous appelez " << total << "." << endl; 

   return 0;
}