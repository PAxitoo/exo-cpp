#include <iostream>

using namespace std;

void echange(int& x, int& y) {
    int t = x;
    x = y;
    y = t;
}
int main() {
    int a = 3;
    int b = 2;
    echange(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
