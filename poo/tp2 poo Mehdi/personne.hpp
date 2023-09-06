#ifndef __PERSONNE_H__
#define __PERSONNE_H__
#include <iostream>
#include <string>

using namespace std;

class personne_t{  

private:  

    string nom;  
    string prenom;  
    int age;  
    std::string profession;   

public:   

    personne_t(std::string nom, std::string prenom, int age);   
    void setAge(int age);   
    int getAge();   
    std::string getProfession();   
    void setProfession(std::string profession);   
    std::string affiche();   

}; 
#endif // __PERSONNE_H__