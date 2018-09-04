#include "inteiro.h"


Inteiro::Inteiro(int v){
  value = v;
}

Inteiro::~Inteiro(){}

int Inteiro::getValue(){
  return value;
}

Inteiro Inteiro::suc(){
  Inteiro n(value + 1);
  return n;
}

Inteiro Inteiro::pred(){
  Inteiro n(value - 1);
  return n;
}

Inteiro Inteiro::operator+(Inteiro n){
  Inteiro s(value + n.getValue());
  return s;
}

Inteiro Inteiro::operator-(Inteiro n){
  Inteiro d(value - n.getValue());
  return d;
}

Inteiro Inteiro::operator*(Inteiro n){
  Inteiro t(value * n.getValue());
  return t;
}