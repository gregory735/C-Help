#include "racional.h"
#include <stdlib.h>

Racional:: Racional (int va, int vb, char sinal){
    a = va;
    b = vb;
    if(sinal == '-')
      a=-a;
}

Racional::~ Racional (){}

int Racional::getValue(){ 
       return getA();
}

int Racional::getA(){ 
       return a;
}

int Racional::getB(){ 
       return b;
}


Racional Racional::operator+(Racional n){
    int va = a*n.getB() + b*n.getA();
    int vb = b*n.getB();
    Racional s(abs(va),abs(vb),(va/vb)<0?'-':'+');
    return s;
}

Racional Racional::operator-(Racional n){
    int va = a * n.getB() - b*n.getA();
    int vb = b*n.getB();
    Racional s(abs(va),abs(vb),(va/vb)<0?'-':'+');
    return s;
}

Racional Racional::operator*(Racional n){
    int va= a*n.getB()*(b*n.getA());
    int vb=b*n.getB();
    Racional s(abs(va),abs(vb), (va/vb)<0?'-':'+');
    return s;
}

Racional Racional::operator/(Racional n){
    int va= a*n.getB()/(b*n.getA());
    int vb=b*n.getB();
    Racional s(abs(va),abs(vb), (va/vb)<0?'-':'+');
    return s;
}
