class acces_t {
    int m_value;
    mutable int m_nbGetSinceSet;
public:
    acces_t(int value) : m_value(value), m_nbGetSinceSet(0) {}

    int get() const {
        m_nbGetSinceSet++;
        return m_value;
    }

    int nbGet() const {
        return m_nbGetSinceSet;
    }

    void set(int value) {
        m_value = value;
        m_nbGetSinceSet = 0;
    }
    
};


int main()
{
    acces_t n{4};
    n.nbGet(); // renvoie 0
    n.get();   // renvoie 4
    n.nbGet(); // renvoie 1
    n.nbGet(); // renvoie 1
    n.get();   // renvoie 4
    n.nbGet(); // renvoie 2
    n.set(2);
    n.nbGet(); // renvoie 0
    n.get();   // renvoie 2
    n.nbGet(); // renvoie 1

    acces_t const c{5};
    c.nbGet(); // renvoie 0
    c.get();   // renvoie 5
    c.nbGet(); // renvoie 1
    c.nbGet(); // renvoie 1
    c.get();   // renvoie 5
    c.nbGet(); // renvoie 2
    c.nbGet(); // renvoie 0
    c.get();   // renvoie 5
    c.nbGet(); // renvoie 1
    return 0;
}
