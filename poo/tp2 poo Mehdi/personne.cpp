#include <iostream>
#include <string>
#include "personne.hpp"

using namespace std;

personne_t::personne_t(string nom, string prenom, int age)
{
    this->nom = nom;
    this->prenom = prenom;
    this->age = age;
}

void personne_t::setAge(int age){
    this->age = age;
}

int personne_t::getAge(){
    return this->age;
}

string personne_t::getProfession(void){
    return "personne";
}

string personne_t::affiche()
{
    return this->nom + " " + this->prenom + " " + to_string(this->age);
}
