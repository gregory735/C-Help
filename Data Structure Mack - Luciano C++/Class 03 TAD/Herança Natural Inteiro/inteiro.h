#ifndef INTEIRO_H
#define INTEIRO_H

class Inteiro{

private:
  int value;
  char sinal;
public:
  int getValue();
  Inteiro(unsigned int v,char sinal);
  ~Inteiro();
  Inteiro suc();
  Inteiro pred();
  Inteiro operator+(Inteiro n);
  Inteiro operator-(Inteiro n);
  Inteiro operator*(Inteiro n);
};


#endif