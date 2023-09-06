#include <iostream>

using namespace std;

namespace monEsp{
    void f(){}
    int maVar=1;
    struct A{};
    void h();
    namespace mSE{
        int  maVar=3;
    }
    
}

int maVar=2;

int main(){
    cout << monEsp::maVar << endl;
    cout << maVar << endl;
    cout << monEsp::mSE::maVar << endl;
    return 0;
};