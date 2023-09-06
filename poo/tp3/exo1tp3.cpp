#include <iostream>
#include "exo1.hpp"

using namespace std;


bool Interv::appartient(double e)const{
    if(e >= this->bi && e <= this->bs)
        return 0;
}

Interv::Interv(double a, double b){
    bs = maxd(a,b);
    bi = mind(a,b);
}

Interv::Interv(double a){
    bs = bi = a;
}

Interv::Interv(){
    bs = 0;
    bi = 1;
}

Interv Interv::intersec(Interv a)const{
    Interv r;
    r.bs = mind(this->bs, a.bs);
    r.bi = maxd(this->bi, a.bi);
    return r;
}

int Interv::estVide(){
    if(bs<bi)
        return 1;
    return 0;
}

Interv Interv::unifier(Interv a){
    Interv r;
    if(a.estVide())return *this;
    if(this->estVide()) return a;
    if(this->intersec(a).estVide())
        throw 1;
    r.bs = maxd(this->bs, a.bs);
    r.bi = mind(this->bi, a.bi);
    return r;
}


int maxd(double a, double b){
    return a<b?b:a;
}
int mind(double a , double b){
    return a<b?a:b;
}