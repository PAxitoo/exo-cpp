#include <iostream>

struct A{
    private:
    int a;
    public:
    A(int p){
        a = p;
    }
    void afficher(void) const{
        std::cout << a << std::endl;
    }
};
int main(void){
    A obj1{3};
    const A obj2;
    obj1.afficher();
    obj2.afficher();
}