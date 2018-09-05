#include "natural.h"

Natural::Natural(unsigned int v){
  value = v;
}

Natural::~Natural(){}

unsigned int Natural::getValue(){
  return value;
}

Natural Natural::suc(){
  Natural n(value + 1);
  return n;
}

Natural Natural::operator+(Natural n){
  Natural s(value +n.getValue());
  return s;
}

Natural Natural::operator*(Natural n){
  Natural t(value * n.getValue());
  return t;
}

