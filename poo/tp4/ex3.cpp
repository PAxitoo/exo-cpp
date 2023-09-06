#include <iostream>

class tableau20_t {
private:
    int tab[20];

public:
    tableau20_t() {
        for (int i = 0; i < 20; i++) {
            tab[i] = 0;
        }
    }

    int& operator[](int i) {
        return tab[i];
    }

    int nbNul() const {
        int count = 0;
        for (int i = 0; i < 20; i++) {
            if (tab[i] == 0) {
                count++;
            }
        }
        return count;
    }

    void affiche() const {
        for (int i = 0; i < 20; i++) {
            std::cout << tab[i] << " ";
        }
        std::cout << std::endl;
    }

    tableau20_t operator+(const tableau20_t& other) const {
        tableau20_t result;
        for (int i = 0; i < 20; i++) {
            result[i] = tab[i] + other.tab[i];
        }
        return result;
    }

    tableau20_t& operator=(const tableau20_t& other) {
        if (this != &other) {
            for (int i = 0; i < 20; i++) {
                tab[i] = other.tab[i];
            }
        }
        return *this;
    }
};

int main() {
    tableau20_t tab1;
    tab1[4] = 2;
    int var1 = tab1.nbNul();
    int var2 = tab1[4]; 
    tab1.affiche(); 
    tableau20_t tab2;
    tab2 = tab1;
    tableau20_t tab3 = tab2 + tab1;
    tab3.affiche();
}
