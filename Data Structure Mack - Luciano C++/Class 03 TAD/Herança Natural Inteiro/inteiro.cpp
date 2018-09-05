#include "inteiro.h"
#include <stdlib.h>

Inteiro:: Inteiro (unsigned int v,char sinal){
if (sinal == '+')
value = v;
else if (sinal == '-')
value=-v;
}

Inteiro::~Inteiro(){}

int Inteiro::getValue(){
  return value;
}

Inteiro Inteiro::suc(){
  int v = value + 1;
  Inteiro n(abs(v), v<0?'-':'+');
  return n;
}

Inteiro Inteiro::pred(){
  int v = value - 1;
  Inteiro n(abs(v), v<0?'-':'+');
  return n;
}

Inteiro Inteiro::operator+(Inteiro n){
  int v= value + n.getValue();
  Inteiro s(abs(v), v<0?'-':'+');
  return s;
}

Inteiro Inteiro::operator-(Inteiro n){
   int v= value - n.getValue();
  Inteiro d(abs(v), v<0?'-':'+');
  return d;
}

Inteiro Inteiro::operator*(Inteiro n){
   int v= value * n.getValue();
  Inteiro t(abs(v), v<0?'-':'+');
  return t;
}