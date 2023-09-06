#include <iostream>

void f(int a){
    std::cout << "f1" << std::endl;
}
void f(char c){
    std::cout << "f2" << std::endl;
}
void f(double c){
    std::cout << "f3" << std::endl;
}
void f(char c, char d){
    std::cout << "f4" << std::endl;
}
void f(char c, double e){
    std::cout << "f5" << std::endl;
}

int main(){
    int i=1;
    char c=2;
    double d =4.5;

    f(d);
    f(c);
    f(i);
    f(d,d);
}