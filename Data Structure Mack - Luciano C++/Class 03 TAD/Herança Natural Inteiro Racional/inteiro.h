#ifndef INTEIRO_H
#define INTEIRO_H
#include "racional.h"

class Inteiro:Racional{

public:
  int getValue();
  Inteiro(unsigned int v,char sinal);
  ~Inteiro();
  Inteiro suc();
  Inteiro pred();
};


#endif