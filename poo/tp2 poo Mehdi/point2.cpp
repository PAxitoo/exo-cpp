#include<iostream>
#include "point2.hpp"

using namespace std;

point2_t::point2_t(float px, float py)
{
    x=px;
    y=py;
}
void point2_t::afficherPoint()
{
    cout << "(" << x << "," << y << ")" << endl;
}


void point2_t::rotate()
{
    float tmp=x;
    x=-y;
    y=tmp;
}
void point2_t::translate(point2_t a){
    x += a.x;
    y += a.y;
}
void point2_t::setX(int x) {
        this->x=x;
}
void point2_t::setY(int y) {
        this->y=y;
}
point2_t point2_t::barycentre(point2_t a){
    float mx = (x+a.x)/2;
    float my = (y+a.y)/2;
    point2_t b(mx,my);
    return b;
}

    int main(){
        point2_t a(0,2);
        point2_t b(0,6);
        point2_t c = b.barycentre(a);
        point2_t p(4, 5);
        
        c.afficherPoint();
        a.setX(5);
        a.setY(7);
        c.afficherPoint(); // (-4,1)
        c.translate(p);
        c.afficherPoint(); //(0,6)

}
//Le code ne sera pas compilé car les variables x et y de la classe Point sont déclarées comme privées, ce qui signifie qu'elles ne sont pas accessibles ou modifiables depuis l'extérieur de la classe.