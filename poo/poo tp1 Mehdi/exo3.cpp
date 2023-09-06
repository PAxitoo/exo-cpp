#include <iostream>

using namespace std;

struct point{
    private:
        float x;
        float y;
    public:
        point(float px, float py)
    {
        x=px;
        y=py;
    }
    void afficherPoint()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }


    void rotate()
    {
        float tmp=x;
        x=-y;
        y=tmp;
    }
    void translate(point a){
        x += a.x;
        y += a.y;
    }
    void setX(int x) {
            this->x=x;
    }
    void setY(int y) {
            this->y=y;
    }
    point barycentre(point a){
        float mx = (x+a.x)/2;
        float my = (y+a.y)/2;
        point b(mx,my);
        return b;
    }
};

    int main(){
        point a(0,2);
        point b(0,6);
        point c = b.barycentre(a);
        point p(4, 5);
        
        c.afficherPoint();
        a.setX(5);
        a.setY(7);
        c.afficherPoint(); // (-4,1)
        c.translate(p);
        c.afficherPoint(); //(0,6)

}
//Le code ne sera pas compilé car les variables x et y de la classe Point sont déclarées comme privées, ce qui signifie qu'elles ne sont pas accessibles ou modifiables depuis l'extérieur de la classe.}

