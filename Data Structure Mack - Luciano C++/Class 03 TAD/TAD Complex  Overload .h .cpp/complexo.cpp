#include "complexo.h"
#include <stdlib.h>

Complexo::Complexo(int va,int vb,char imaginario, char sinal, char sinalB){
   a=va;
   b=vb;
   if(sinal == '-')
       a=-a;
   if(sinalB == '-')
       b=-b;
}

int Complexo::getValueReal(){ 
       return getA();
}

int Complexo::getValueImaginario(){ 
       return getB();
}

Complexo::~ Complexo (){}

int Complexo::getA(){ 
       return a;
}

int Complexo::getB(){ 
       return b;
}

Complexo Complexo::operator+(Complexo n){
    int va= a + n.getA();
    int vb= b + n.getB();
    Complexo s(abs(va),abs(vb),'i', (va)<0?'-':'+',(vb)<0?'-':'+');
    return s;
}

Complexo Complexo::operator-(Complexo n){
    int va= a - n.getA();
    int vb= b - n.getB();
    Complexo s(abs(va),abs(vb),'i', (va)<0?'-':'+',(vb)<0?'-':'+');
    return s;
}

Complexo Complexo::operator*(Complexo n){
    int va= (a * n.getA()) - (b*n.getB());
    int vb= (a * n.getB()) + (b*n.getA());
    Complexo s(abs(va),abs(vb),'i', (va)<0?'-':'+',(vb)<0?'-':'+');
    return s;
}
