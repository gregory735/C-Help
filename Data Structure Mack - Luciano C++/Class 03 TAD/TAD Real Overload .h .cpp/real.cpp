#include "real.h"
#include <stdlib.h>

Real:: Real (double va, double vb, char sinal){
    a = va;
    b = vb;
    if(sinal == '-')
      a=-a;
}

Real::~ Real (){}

double Real::getValue(){ 
       return getA();
}

double Real::getA(){ 
       return a;
}

double Real::getB(){ 
       return b;
}


Real Real::operator+(Real n){
    double va = a*n.getB() + b*n.getA();
    double vb = b*n.getB();
    Real s(abs(va),abs(vb),(va/vb)<0?'-':'+');
    return s;
}

Real Real::operator-(Real n){
    double va = a * n.getB() - b*n.getA();
    double vb = b*n.getB();
    Real s(abs(va),abs(vb),(va/vb)<0?'-':'+');
    return s;
}

Real Real::operator*(Real n){
    double va= a*n.getB()*(b*n.getA());
    double vb=b*n.getB();
    Real s(abs(va),abs(vb), (va/vb)<0?'-':'+');
    return s;
}

Real Real::operator/(Real n){
    double va= a*n.getB()/(b*n.getA());
    double vb=b*n.getB();
    Real s(abs(va),abs(vb), (va/vb)<0?'-':'+');
    return s;
}
