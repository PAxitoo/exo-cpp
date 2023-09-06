#include <iostream>
#include <cmath>

class vecteur2d_t {
private:
    float x, y;
public:
    vecteur2d_t(float x = 0, float y = 0) : x(x), y(y) {}

    vecteur2d_t operator+(const vecteur2d_t& a) const {
        return vecteur2d_t(x + a.x, y + a.y);
    }

    vecteur2d_t operator*(float p) const {
        return vecteur2d_t(x * p, y * p);
    }

    float operator||(const vecteur2d_t& s) const {
        return x * s.x + y * s.y;
    }

    void afficher() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    vecteur2d_t v1(1, 2);
    vecteur2d_t v2(3, 4);
    vecteur2d_t v3 = v1 + v2;
    v3.afficher();
    vecteur2d_t v4 = v1 * 2;
    v4.afficher();
    float produitScalaire = v1 || v2;
    std::cout << produitScalaire << std::endl;

    return 0;
}
