#include<iostream>
using namespace std;

class CompteInstance{
    private:
    static int count;
public:
    CompteInstance(){ 
        count++; }
    ~CompteInstance(){ 
        count--; }

    static int compter(void){ 
        return count; 
        }
};

int CompteInstance::count = 0;

int main(){
    CompteInstance c1;
    CompteInstance c2;
    CompteInstance c3;
    cout << "Nombre d'instances : " << CompteInstance::compter() << endl;
    return 0;
}
 